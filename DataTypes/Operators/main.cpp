#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define ARITHMETICAL_OPERATORS
//#define ASSIGNMENT_OPERATOR
//#define INCREMENT_DECREMENT	//	++/--

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Привет!" << endl;
	//Выражение (Expression) - это синтаксическая конструкция, 
	//состоящая из операндов и операторов.
	//тернарные
#ifdef ARITHMETICAL_OPERATORS
	- 3;
	+3;
	8 - 3;
	8 * 3;
	//*3;
	cout << 2 / 7 << endl;
	cout << 2 % 7 << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//int a = (2 + 3 * 4) / 5;
	//value - значение;
	//l-value = r-value;
	//const int b = 3;

	int a, b, c;
	a = b = c = 0;	//Ассоциативность оператора присвоить "справа налево".
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	int d = a + 2 * 4 - 3 * 2;
#endif

#ifdef INCREMENT_DECREMENT
	int i = 0;
	int j = ++i;
	cout << j << endl;
	cout << i << endl;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix decrement
#endif

	int a = 2;
	a = a + 3;
	///////////////////
	a += 3;

	cout << (!true == false) << endl;
}