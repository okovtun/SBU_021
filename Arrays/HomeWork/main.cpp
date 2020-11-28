#include<iostream>
#include<time.h>
#include<iostream>
#include<time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	const int n = 10;
	int arr[n] = { };
	for (int i = 0; i < n; i++)	arr[i] = rand() % 10+90;
	cout << "Произвольный массив:" << endl;
	for (int i = 0; i < n; i++) cout << arr[i] << "\t";
	cout << endl << endl;
	int replay = 0, number = 0;
	for (int i = 0; i <= n; i++)
	{
		replay = 0;
		for (int j = 0; j < n; j++)
		{
			if (arr[j] == i) replay++, number = arr[j];
		}
		if (replay > 1) cout << "Число \"" << number << "\"" << " встречается " << replay << " раз(-а) в данном массиве!" << endl;
	}
	cout << endl;
	system("PAUSE");
}