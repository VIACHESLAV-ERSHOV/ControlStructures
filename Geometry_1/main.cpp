#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;
using std::cout;
using std::cin;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
#define TRIANGLE_4

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "введите количество звездочек: "; cin >> n;

#ifdef SQUARE
	(int i = 0; i < n; i++)
	{
		cout << "* ";
	}
	cout << endl;
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";

		cout << endl;
	}
#endif // TRIANGLE_3

}




