#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	const int SIZE = 10;
	int arr[SIZE]{};
	for (int i = 0; i < SIZE; i++)	//��������� �������
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < SIZE; i++)	//����� ������� �� �����
	{
		cout << arr[i] << "\t";
	}
	cout << endl << endl;
	int x = 0; //�������
	int number; //����� ������ �������
	for (int i = 0; i < SIZE; i++) //����� �����, �������������� ����� ������ ����
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