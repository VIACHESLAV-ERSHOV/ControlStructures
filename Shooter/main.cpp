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
		case (119):cout << "w" << " вперед " << endl; break;
		case (115):cout << "s" << " назад " << endl; break;
		case (97):cout << "a" << " налево " << endl; break;
		case (100):cout << "d" << " направо " << endl; break;
		case (13):cout << "enter" << " огень " << endl; break;
		case (32):cout << "spase" << " прижок " << endl; break;
		case (27):cout << "escape" << " выход " << endl; break;
		default:cout << "error" << endl;

		}
	}
}