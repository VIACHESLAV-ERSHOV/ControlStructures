#include<iostream>
using namespace std;

//#define HARDCHESS_1

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер доски:"; cin >> n;
#ifdef HARDCHESS_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					cout << (i % 2 == k % 2 ? "* " : "  ");
				}
			}
			cout << endl;
		}

	}

#endif // HARDCHESS_1

	for ( int i = 0;i<n;i++)
		for (int j = 0; j <= i; j++)
		{
			cout << (i % 2 == j % 2 ? "* " : "  ");
		}
	cout << endl;
}