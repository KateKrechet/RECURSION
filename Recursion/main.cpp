#include<iostream>
using namespace std;
//#define FLOOR
#define FACTORIAL
#define POWER
#define FIBONACHCHI
#define tab "\t"

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале";
		return;
	}
	cout << floor << endl;
	elevator(floor - 1);
	//cout << floor << endl;
}

long long int factorial(int n)
{
	if (n < 1) return 0;
	else if (n == 1) return 1;
	else return n * factorial(n - 1);
}
double power(int a, int n)
{
	if (a == 0 && n == 0) return 0;
	else if (n == 0) return 1;
	else if (n < 0) return 1 / power(a, n * (-1));
	else return a * power(a, n - 1);
}
long long int fibonachchi(int n)
{
	if (n == 0) return 0;
	else if (n == 1 || n == 2) return 1;
	else return fibonachchi(n - 2) + fibonachchi(n - 1);
}



void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef FLOOR
	/*cout << "Hello World";
main();*/
	int floor;
	cout << "Введите номер этажа "; cin >> floor;
	elevator(floor);
	cout << endl << endl;
#endif // FLOOR
#ifdef FACTORIAL
	cout << "Вычисление факториала" << endl;
	int number;
	cout << "Введите число "; cin >> number;
	cout << "Результат:" << factorial(number) << endl;
#endif // FACTORIAL
#ifdef POWER
	cout << "Возведение числа в степень" << endl;
	int number1;
	int n;
	cout << "Введите число "; cin >> number1;
	cout << "Введите степень "; cin >> n;
	cout << "Результат:" << power(number1, n) << endl;
#endif // POWER
#ifdef FIBONACHCHI
	int n1;
	cout << "Введите количество элементов последовательности Фибоначчи "; cin >> n1;
	cout << "Вывод ряда Фибоначчи для заданного количества элементов" << endl;
	for (int i = 1; i <= n1; i++)
	{
		cout << fibonachchi(i) << tab;
	}
	cout << endl;
	unsigned long long n2 = power(2, 64);
	unsigned long long int limit;
	cout << "Введите значение, до которого надо выводить ряд Фибоначчи "; cin >> limit;
	for (int i = 1; i <= n2; i++)
	{
		if (fibonachchi(i) <= limit)
		{
			cout << fibonachchi(i) << tab;
		}
		else break;
	}
#endif // FIBONACHCHI


}



