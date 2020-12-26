#include<iostream>
using namespace std;

//#define START
//#define POINTER_ARITHMETICS

void main()
{
	setlocale(LC_ALL, "Russian");
	
	using std::cin;
	using std::cout;
	using std::endl;

#ifdef START
	int a = 2;	//���������� ����������
	int* pa = &a;//Pointer to 'a'
	//& - �������� ������ ������
	cout << a << endl;	//����� ���������� 'a' �� �����
	cout << &a << endl;	//��������� ������ ���������� 'a' ��� ������
	cout << pa << endl;	//����� ������ ���������� 'a', ����������� � ��������� 'pa'
	cout << *pa << endl;//������������� ���������� 'pa' � ��������� �������� �� ������ � ���� ���������.
	//* - �������� ������������� (Dereference operator)


	//////////////////////////////////////////////////////

	int* pointer;
	int b = 3;
	pointer = &b;

	/*
	--------------------------
	int - int;
	int* - ��������� �� int
	double - double;
	double* - ��������� �� double
	--------------------------
	*/

	double  price = 2.5;
	double* p_price = &price;
#endif // START
	

#ifdef POINTER_ARITHMETICS
	const int n = 15;
	int arr[n] = { 3, 5, 8, 13, 21 };
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
	/*
	----------------------
	+, -, ++, --
	----------------------
	*/
#endif // POINTER_ARITHMETICS


	//Reference - ��� ����������, ������� �������� ����� ������ ����������.
	int a = 2;
	int& ra = a;
	ra += 3;
	cout << &a << endl;
	cout << &ra << endl;
}