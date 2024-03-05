#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;
//#define WHILE
//#define FOR
//#define HOMEWORK_1
//#define HOMEWORK_2
//#define HOMEWORK_3
//#define HOMEWORK_4
//#define HOMEWORK_5
//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI_1
//#define FIBONACCI_2
//#define TABLE
//#define PYTHAGORAS
//#define SIMPLEX_NUMBERS
//#define MULTILICANION_TABLE

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE
	int i = 0;   //счетчик цикла
	int n;       //количество итераций
	cout << "¬ведите количество итерций: "; cin >> n;
	while (i < n)
	{
		cout << "Hello\n";
		i++;
	}
#endif // WHILE

#ifdef FOR
	int n;
	cout << "¬ведите количество итераций: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++
		)

	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR

#ifdef HOMEWORK_1
	int n;
	int b = 1;
	cout << "¬ведите число n = "; cin >> n;
	for (int i = 1; i <= n; i++)
		b = b * i;
	cout << "факториал = " << b;
	cout << endl;
	main();
#endif // HOMEWORK_1

#ifdef HOMEWORK_2
	int base, index;
	int total = 1;
	cout << "¬ведите основание степени: "; cin >> base;
	cout << "¬ведите показатель степени: "; cin >> index;
	for (int i = 0; i < index; i++)
	{
		total *= base;
	}
	cout << base << " в степени " << index << " = " << total << endl;
	main();
#endif // HOMEWORK_2

#ifdef HOMEWORK_3
	char key;
	for (int i = 0; i < 256; i++)
	{
		key = _getch();
		cout << (int)key << "\t";
	}
#endif // HOMEWORK_3

#ifdef HOMEWORK_4
	int n;
	int a = 0;
	int b = 1;
	int row;
	cout << "¬ведите число: "; cin >> n;
	cout << "р€д ‘ибоначчи: ";
	for (int i = 0; a < n; i++)
	{
		cout << a << "\t";
		row = a + b;
		a = b;
		b = row;
	}
	cout << endl;
	main();
#endif // HOMEWORK_4

#ifdef HOMEWORK_5
	int  row;
	int n;
	int a = 0;
	int b = 1;

	cout << "из р€да ‘ибоначчи: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << a << "\t";
		a += b;
		row = a;
		a = b;
		b = row;
	}

#endif // HOMEWORK_5

#ifdef FACTORIAL
	int n;
	cout << "¬ведите число: "; cin >> n;
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << "\n";
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;        //основание степени
	int n;        //показатель стпени
	double N = 1;    // степень
	cout << "¬ведите основание степени: "; cin >> a;
	cout << "¬ведите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

#ifdef FIBONACCI_1
	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI_1

#ifdef TABLE

	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t""\n";
		for (int j = 1; j <= 10; j++)
			cout << i << " * " << j << " = " << i * j << "\t""\n";
	}
	cout << endl;

#endif // TABLE

#ifdef PYTHAGORAS
	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
		for (int j = 1; j <= 10; j++)
			cout << i * j << "\t";
		cout << endl;
	}
#endif // PYTHAGORAS

#ifdef SIMPLEX_NUMBERS
	int n;
	cout << "¬ведите предельное число: "; cin >> n;
	system("COLOR 0A");
	int simplex_counter = 0;
	time_t start = clock();
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;  //преположим, что число простое,
		//но это нужно проверить:
		for (int j = 2; j < sqrt(i); j++)
			// функци€ sqrt() возвращает двадратный корень числа
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)simplex_counter++;
			//cout <<(simplex_counter++, i) << "\t";
	}
	time_t end = clock();
	cout << endl;
	cout << "Amount of simplex numders: " << simplex_counter << endl;
	cout << "Calculated by: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;
#endif // SIMPLEX_NUMBERS

#ifdef MULTILICANION_TABLE
	for (int i = 1; i <= 10; i++)       //Outer for
	{
		cout << "таблица умножени€ на " << i << ":\n";
		for (int j = 1; j <= 10; j++)   //Inner for
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
		cout << endl;
	}
#endif // MULTILICANION_TABLE

}

