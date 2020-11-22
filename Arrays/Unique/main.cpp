#include<iostream>
using namespace std;

void main()
{
	//RAII - Resource Aquilization Is Initialization (Выделение ресурсов это инициализация)
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			unique = true;
			arr[i] = rand() % 100;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int a = 2, b;
	cout << a / b << endl;
}