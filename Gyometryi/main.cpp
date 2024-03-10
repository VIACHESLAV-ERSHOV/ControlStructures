#include<iostream>
#include<conio.h>
#include<ctime>
using namespace std;
using std::cout;
using std::cin;

//#define FIGURE_0
//#define FIGURE_1
//#define FIGURE_2
//#define FIGURE_3
//#define FIGURE_4
//#define FIGURE_5   
//#define FIGURE_6
//#define CHANGE
//#define CHANGE_XOR
//#define	ROMB
//#define CHESS_ASCII

#define PASCAL

void main()
{
	setlocale(LC_ALL, "");

#ifdef FIGURE_0
	int n;
	cout << "введите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
	cout << endl;
#endif // FUGURE_0

#ifdef FIGURE_1
	int  n;
	cout << "введите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < i; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
#endif // FIGURE_1

#ifdef FIGURE_2
	int  n;
	cout << "введите число: "; cin >> n;
	for (int i = n; i > 0; i--)
	{

		for (int j = 0; j < i; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
#endif // FIGURE_2

#ifdef FIGURE_3
	int  n;
	cout << "введите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k < n - i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // FIGURE_3

#ifdef FIGURE_4
	int  n;
	cout << "введите число: "; cin >> n;
	for (int i = 0; i < n; ++i)
	{

		for (int j = 0; j < n - i; ++j)
		{
			cout << " ";
		}
		for (int k = 0; k < i; ++k)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // FIGURE_4

#ifdef FIGURE_5
	int n;
	cout << "введите число:";  cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << " ";
		}
		cout << "/";
		for (int j = 0; j < i * 2; j++)
		{
			cout << " ";
		}
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << " \\";
		for (int k = 0; k < (n - i - 1) * 2; k++)
		{
			cout << " ";
		}
		cout << "/";
		cout << endl;
	}
#endif // FIGURE_5

#ifdef FIGURE_6
	int n;
	cout << "введите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)cout << " + ";
			else cout << " - ";
		}
		cout << endl;
	}
	
#endif // FIGURE_6

	//int n;
	//cout << "введите число:";  cin >> n;
	/*for (int i = 0; i < n * 2 + 1; i++)
	{
		for (int j = 0; j < n * 2 + 1; j++)
		{
			if (j <= n + i && j >= n - i  || j <= n - i && j>= i - n)
			{
				cout << "/";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}*/
	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << " \\";
		for (int k = 0; k < (n - i - 1) * 2; k++)
		{
			cout << " ";
		}
		cout << "/";
		cout << endl;
	}*/
#ifdef CHANGE
	int a;
	int b;
	int c;
	cout << "до: a = "; cin >> a;
	cout << "до: b = "; cin >> b;

	c = a;
	a = b;
	b = c;

	cout << "после: a = " << a << "\n" << "после: b = " << b << endl;
#endif // CHANGE

#ifdef CHANGE_XOR
	int a;
	int b;
	cout << "до: a = "; cin >> a;
	cout << "до: b = "; cin >> b;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout << "после: a = " << a << "\n" << "после: b = " << b << endl;
#endif // CHANGE_XOR

#ifdef ROMB
	for (int i = 0; i > n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
		for (int j = i; j < n - i - 1; j++) cout << "  "; cout << "/";
		cout << endl;
	}
#endif // ROMB

	/*for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i + n == j || j + n == i)cout << "\\";
			//else if (n - i % n - 1 == j % n  && i + j != n * 2 - 1) cout << "/";
            else if (n - 1 - j == i || n * 2 + n - i - 1 == j) cout << "/";
			else cout << " ";


		}
		cout << endl;
	}*/
	

#ifdef CHESS_ASCII
	int n;
	cout << "введите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			if (i == 0 && j == 0)cout << char(199);
			else if (i == 0 && j == n)cout << char(221);
			else if (i == n && j == 0)cout << char(222);
			else if (i == n && j == n)cout << char(223);
			else if (i == 0 || i == n)cout << char(224) << char(224);
			else if (j == 0 || j == n)cout << char(225);
			else if ((i + j) % 2 == 0)cout << char(220) << char(220);
			else cout << char(32) << char(32);
		}
		cout << endl;
	}
	/*for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << i << " - " <<(char)i << "\n";
	}*/
#endif // CHESS_ASCII



	/*int n;
	cout << "введите число: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int l = 0; l < n; l++)
			{
				
					if ((i + l) % 2 == 0)cout << "* ";
					else cout << " ";
			}
		}
		cout << endl;
	}*/


#ifdef PASCAL
	const int width = 8;
	int n;
	double num = 1;

	cout << "высота треугольника: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= n; j++)cout << "\t";

		for (int j = 0; j  <= i; j++)
		{
			if (i > 0 && j > 0)
				num = num * (i - j + 1) / j; cout << "\t" << num;
		}
		
		cout << endl;
	}

#endif // PASCAL

	/*int n;
	cout << "введите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
		{
			//if (i % 2 == j % 2) cout << "+ "; else cout << "- ";
			//(i % 2 == j % 2) ? cout << "+ " : cout<<"- ";
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
	true;*/
}