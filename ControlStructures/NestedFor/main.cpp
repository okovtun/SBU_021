#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n = 10;
	/*for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << " * " << j << " = " << i*j << endl;
		}
	}*/

	cout << "¬ведите число: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}