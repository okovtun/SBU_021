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
	cout << "Введите температуру воздуха: "; cin >> temperature;
	cout << temperature << endl;
	if (temperature > 15)
	{
		cout << "На улице тепло :-)" << endl;
	}
	else
	{
		cout << "На улице холодно :-(" << endl;
	}*/

	/*if (Condition)
	{

	}
	else
	{

	}*/

	double a, b;	//Числа, вводимые с клавиатуры
	char s;		//Sign - знак операции
	cout << "Введите выражение: ";
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
(Loop - Петля)
1. while - цикл с предусловием;
2. do...while - цикл с постусловием;
3. for - цикл на заданное число итераций;

Итерация - однократное выполнение тела цикла.
-------------------------------
*/