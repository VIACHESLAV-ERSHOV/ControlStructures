#include<iostream>
#include<conio.h>
using namespace std;
using std::cout;
using std::cin;

//#define IF_ELSE
//#define WHILE_1
//#define WHILE_2
//#define CALCULATOR
//#define PALINDROME

void main()
{
	setlocale(LC_ALL, "");

#ifdef IF_ELSE
	int temperature;
	cout << "Ввидите температуру воздуха:"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif // IF_ELSE

#ifdef WHILE_1
	int i = 0;
	int n;
	cout << "Ввидите количество итераций:"; cin >> n;
	while (++i < n)
	{
		cout << i << "Hello World\n";
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций:"; cin >> n;
	while (n--)
	{
		cout << n << "Hello World" << endl;
	}
	cout << n << endl;
#endif // WHILE_2

#ifdef CALCULATOR
	char sign;
	double a, b, total;
	cout << "Введите первое число:"; cin >> a;
	cout << "Введите второе число:"; cin >> b;
	cout << "Знак:"; cin >> sign;

	if (sign == '+')
		total = a + b;
	else if (sign == '-')
		total = a - b;
	else if (sign == '*')
		total = a * b;
	else if (sign == '/')
		total = a / b;
	{
		cout << "Итого:" << total << endl;
	}

#endif // CALCULATOR
#ifdef PALINDROME
	//  подсмотрил в google. сам не сообразил, как написать условие
	int a;                                   //Исходное число
	cout << "Введите число:"; cin >> a;
	int i = a;                               //Объявляем временную переменную со значением исходного числа. Это понятно
	int b = 0;                               //Число перевернутое? Как?

	// как работает условие не понятно
	while (i != 0)
	{
		b = b * 10 + i % 10;                 //Переворачиваем число по цифрам. Как
		i /= 10;                             //Отбрасываем последнюю цифру. Как
	}

	if (a == b)
		cout << "да, это палиндром";
	else
		cout << "нет, это не палиндром";
#endif // PALINDROME

	char key;
	do
	{
		key = _getch(); // функция _getch() ожидает нажатие клавиши, и возвращает ASCII-код нажатой клавиши.
		//этот ASCII-код мы присваиваем переменной key.
		// функция _getch() объявлена в библиотеке <conio.h>
		cout << (int)key << "\t" << key << endl;
		// (int)key - это явное преобразование типа char в unt, для того чтобы увидеть ASCII-код
		
	} while (true);
}