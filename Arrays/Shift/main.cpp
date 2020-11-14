#include<iostream>
using namespace std;

//	1	2	3	4	5	6	7	8	9	10
//	2	3	4	5	6	7	8	9	10	1
//	3	4	5	6	7	8	9	10	1	2

//	10	1	2	3	4	5	6	7	8	9
//	9	10	1	2	3	4	5	6	7	8
//	8	9	10	1	2	3	4	5	6	7

//#define SHIFT_LEFT

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//����� ��������� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int number_of_shifts;
	cout << "�� ������� ��������� �������� ������: ";
	cin >> number_of_shifts;

#ifdef SHIFT_LEFT
	for (int i = 0; i < number_of_shifts; i++)	//��������� ����� ������� �� 1 ������� ������ ���������� ���.
	{
		//����� ������� �� 1 ������� �����:
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
#endif // SHIFT_LEFT

	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}

	//����� ���������� �������:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}