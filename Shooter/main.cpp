#include<iostream>
#include<conio.h>
using namespace std;
using std::cout;
using std::cin;

void main()
{
	setlocale(LC_ALL, "");
	char i;

	while (true)
	{
		i = _getch();
		switch (i)
		{
		case (119):cout << "w" << " ������ " << endl; break;
		case (115):cout << "s" << " ����� " << endl; break;
		case (97):cout << "a" << " ������ " << endl; break;
		case (100):cout << "d" << " ������� " << endl; break;
		case (13):cout << "enter" << " ����� " << endl; break;
		case (32):cout << "spase" << " ������ " << endl; break;
		case (27):cout << "escape" << " ����� " << endl; break;
		default:cout << "error" << endl;

		}
	}
}