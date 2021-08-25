#include<iostream>
using namespace std;
//#define FLOOR
//#define FACTORIAL
//#define POWER
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
	return n == 0 ? 1 : n * factorial(n - 1);
}
double power(int a, int n)
{
	/*if (n == 0) return 1;
	if (n < 0) return 1. / power(a, n + 1);
	return a * power(a, n - 1);*/
	return n == 0 ? 1 : n > 0 ? a * power(a, n - 1) : 1. / a * power(a, n + 1);

}
//void fibonachchi(int n, int a = 0, int b = 1);
void fibonachchi(int n/*, int a, int b*/)
{
	static int a = 0, b = 1, c = 1;
	if (a > n) return;
	cout << a << "\t";
	/*a = b;
	b = c;
	c = a + b;*/
	c = (a = b) + (b = c);
	fibonachchi(n);
}

void fibonachchi2(int n2/*, int a, int b*/)
{
	static int a = 0, b = 1, c = 1;
	cout << a << "\t";
	c = (a = b) + (b = c);
	fibonachchi(n2);
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
	cout << "Введите показатель степени "; cin >> n;
	cout << "Результат:" << power(number1, n) << endl;
#endif // POWER
#ifdef FIBONACHCHI
	int n;
	cout << "Введите значение, до которого надо выводить ряд Фибоначчи "; cin >> n;
	fibonachchi(n);
	cout << endl;
	int n2;
	cout << "Введите количество элементов ряда Фибоначчи "; cin >> n2;
	for (int i = 0; i < n2; i++)
	{
		fibonachchi2(i);
	}
#endif // FIBONACHCHI


}



