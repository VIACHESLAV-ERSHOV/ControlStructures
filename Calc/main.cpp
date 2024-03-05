#include<iostream>
using namespace std;
using std::cout;

//#define CALC_1

void main()
{
	setlocale(LC_ALL, "");
#ifdef CALC_1
	double a, b;
	char s;
	cout << "¬ведите выражение:"; cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;

	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else
	{
		cout << "ошибка в операции" << endl;
	}
#endif // CALC_1
	 
	double a, b;
	char s;
	cout << "¬ведите выражение:"; cin >> a >> s >> b;
	switch (s)
	{
	case '+':cout << a << " + " << b << " = " << a + b << endl; break;
	case '-':cout << a << " - " << b << " = " << a - b << endl; break;
	case '*':cout << a << " * " << b << " = " << a * b << endl; break;
	case ' / ':
		if (b != 0)cout << a << "/" << b << " = " << a / b << endl; 
		else cout << "Error : Division by zero" << endl;
		break;
	default: cout << "Error: no operation" << endl;
	}
	main();
}