#include<iostream>
#include<conio.h>
using namespace std;

#define Escape 27
#define Enter 13

#define UpArrow    72
#define DownArrow  80
#define LeftArrow  75
#define RightArrow 77

//#define SHOOTER_1
#define SHOOTER_2
void main()
{
	setlocale(LC_ALL, "");
#ifdef SHOOTER_1
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w' || key == 'W' || key == UpArrow)cout << "вперед" << endl;
		else if (key == 's' || key == 'S' || key == DownArrow)cout << "назад" << endl;
		else if (key == 'a' || key == 'A' || key == LeftArrow)cout << "влево" << endl;
		else if (key == 'd' || key == 'D' || key == RightArrow)cout << "вправо" << endl;
		else if (key == ' ')cout << "прыжок" << endl;
		else if (key == 13)cout << "огонь" << endl;
		else if (key == 27) cout << "выход" << endl;
		else if (key != -32) cout << "Error" << endl;
	} while (key != Escape);

#endif // SHOOTER_1
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case'w':
		case'W':
		case UpArrow:cout << "¬веред" << endl; break;
		case's':
		case'S':
		case DownArrow:cout << "назад" << endl; break;
		case'a':
		case'A':
		case LeftArrow:cout << "влево" << endl; break;
		case'd':
		case'D':
		case RightArrow:cout << "направо" << endl; break;
		case' ':cout << "прыжок" << endl; break;
		case Enter:cout << "огонь" << endl; break;
		case Escape: cout << "выход" << endl;
		case -32:break;
		default:cout << "error" << endl;
		}
	} while (key != Escape);
}