#include<iostream>
using namespace std;
 
const int width = 8;
typedef unsigned long long int DataType; //директива 
//

void main()
{
	setlocale(LC_ALL, "");
	int h;
	cout << "Введите высоту треугольника: "; cin >> h;
	for (int i = 0; i < h; i++)
	{
		cout.width(width / 2); //задает ширину вывода на экран, а точнее, определяет сколько знакопозиций будет занимать выводимое значение
		//если выводимое значение занимает больше знакопозиций, то оно выйдет за пределы указанной ширины.
		cout << "";//
	}
	cout << left;
	cout << 1 << endl;
	int nf = 1;

	for (int n = 1; n <= h; n++)
	{
		nf *= n;
		int mf = 1;
		for (int i = 0; i < h - n; i++)
		{
			cout.width(width / 2);
			cout << "";
		}
		cout.width(width);
		cout << 1;
		for (int m = 1; m <= n; m++)
		{
			mf *= m;
			int nmf = 1;
			for (int nm = 1; nm <= n - m; nm++) nmf *= nm;
			cout.width(width);
			cout << nf / mf / nmf;
		}
		cout << endl;
	}
}