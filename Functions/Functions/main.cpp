#include<iostream>
using namespace std;

int Add(int a, int b);	//�������� ������� (Function declaration - ���������� �������)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
int Power(int a, int n);

//////////////////////////////////////////
//			Unresolved externals		//
//////////////////////////////////////////
//Unresolved external symbol found

void main()
{
	setlocale(LC_ALL, "");
	cout << Power(2, 3) << endl;
	int a = 2;
	int b = 3;
	int sum = Add(a, b);	//����� ������� (Function call)
	//too few arguments in function call
	//too many arguments in function call
	//function doesn't take N arguments
	cout << sum << endl;
	cout << Sub(a, b) << endl;
	cout << Mul(a, b) << endl;
	cout << Div(a, b) << endl;
}

int Add(int a, int b)	//���������� ������� (Function definition - ����������� �������)
{
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}

int Power(int a, int n)
{
	
}

/*type name(parameters)//��������� ������� (Function header)
{
	//���� �������
	group-of-statements;
	return value;
}

type - ��� ������������� ��������.
void(�������)
return;

name - ��� �������. identifiers

1, 2, ... N*/