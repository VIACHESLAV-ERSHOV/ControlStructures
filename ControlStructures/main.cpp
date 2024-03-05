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
	cout << "������� ����������� �������:"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� �������" << endl;
	}
#endif // IF_ELSE

#ifdef WHILE_1
	int i = 0;
	int n;
	cout << "������� ���������� ��������:"; cin >> n;
	while (++i < n)
	{
		cout << i << "Hello World\n";
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "������� ���������� ��������:"; cin >> n;
	while (n--)
	{
		cout << n << "Hello World" << endl;
	}
	cout << n << endl;
#endif // WHILE_2

#ifdef CALCULATOR
	char sign;
	double a, b, total;
	cout << "������� ������ �����:"; cin >> a;
	cout << "������� ������ �����:"; cin >> b;
	cout << "����:"; cin >> sign;

	if (sign == '+')
		total = a + b;
	else if (sign == '-')
		total = a - b;
	else if (sign == '*')
		total = a * b;
	else if (sign == '/')
		total = a / b;
	{
		cout << "�����:" << total << endl;
	}

#endif // CALCULATOR
#ifdef PALINDROME
	//  ���������� � google. ��� �� ���������, ��� �������� �������
	int a;                                   //�������� �����
	cout << "������� �����:"; cin >> a;
	int i = a;                               //��������� ��������� ���������� �� ��������� ��������� �����. ��� �������
	int b = 0;                               //����� ������������? ���?

	// ��� �������� ������� �� �������
	while (i != 0)
	{
		b = b * 10 + i % 10;                 //�������������� ����� �� ������. ���
		i /= 10;                             //����������� ��������� �����. ���
	}

	if (a == b)
		cout << "��, ��� ���������";
	else
		cout << "���, ��� �� ���������";
#endif // PALINDROME

	char key;
	do
	{
		key = _getch(); // ������� _getch() ������� ������� �������, � ���������� ASCII-��� ������� �������.
		//���� ASCII-��� �� ����������� ���������� key.
		// ������� _getch() ��������� � ���������� <conio.h>
		cout << (int)key << "\t" << key << endl;
		// (int)key - ��� ����� �������������� ���� char � unt, ��� ���� ����� ������� ASCII-���
		
	} while (true);
}