//ControlStructures
#include<iostream>
using namespace std;

//#define CALC_IF

#define CONST_1	1
#define CONST_2 2
#define CONST_3 3
#define CONST_N 4

void main()
{
	setlocale(LC_ALL, "Rus");
	/*int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	cout << temperature << endl;
	if (temperature > 15)
	{
		cout << "�� ����� ����� :-)" << endl;
	}
	else
	{
		cout << "�� ����� ������� :-(" << endl;
	}*/

	/*if (Condition)
	{

	}
	else
	{

	}*/

	double a, b;	//�����, �������� � ����������
	char s;		//Sign - ���� ��������
	cout << "������� ���������: ";
	cin >> a >> s >> b;

#ifdef CALC_IF
	if (s == '+')	cout << a << " + " << b << " = " << a + b << endl;
	else if (s == '-')	cout << a << " - " << b << " = " << a - b << endl;
	else if (s == '*')	cout << a << " * " << b << " = " << a * b << endl;
	else if (s == '/')	cout << a << " / " << b << " = " << a / b << endl;
	else		cout << "Error: No operation!" << endl;
#endif // CALC_IF

	switch (s)
	{
	case '+': cout << a << " + " << b << " = " << a + b << endl; break;
	case '-': cout << a << " - " << b << " = " << a - b << endl; break;
	case '*': cout << a << " * " << b << " = " << a * b << endl; break;
	case '/': cout << a << " / " << b << " = " << a / b << endl; break;
	default:cout << "Error: No operation" << endl;
	}

	//Control strucures
	main();

	/*int var;
	cin >> var;
	switch (var)
	{
	case CONST_1:	code1; break;
	case CONST_2:	code2; break;
		.........
		.........
		.........
	case CONST_N:	codeN; break;
	default:	DefaultCode;
	}*/
}

/*
-------------------------------
switch
-------------------------------
(Loop - �����)
1. while - ���� � ������������;
2. do...while - ���� � ������������;
3. for - ���� �� �������� ����� ��������;

�������� - ����������� ���������� ���� �����.
-------------------------------
*/