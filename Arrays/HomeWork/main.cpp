#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	const int SIZE = 10;
	int arr[SIZE]{};
	for (int i = 0; i < SIZE; i++)	//Генерация массива
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < SIZE; i++)	//Вывод массива на экран
	{
		cout << arr[i] << "\t";
	}
	cout << endl << endl;
	int x = 0; //Счётчик
	int number; //Номер ячейки массива
	for (int i = 0; i < SIZE; i++) //Поиск числа, встречающегося более одного раза
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[i] == arr[j])
			{
				x++;
			}
			else;
		}
		cout << arr[i] << " - " << x << endl;
		x = 0;
	}
	return 0;
}