#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Калькулятор" << endl;
	cout << "Введите выражение ";
	double number1; double number2; char act; double answer;
	cin >> number1 >> act >> number2;
	if (act == '+')
	{
		cout << number1 << "+" << number2 << "=" << number1 + number2 << endl;
	}
	if (act == '-')
	{
		cout << number1 << "-" << number2 << "=" << number1 - number2 << endl;
	}
	if (act == '*')
	{
		cout << number1 << "*" << number2 << "=" << number1 * number2 << endl;
	}
	if (act == '/')
	{
		answer = number1 / number2;
		cout << number1 << "/" << number2 << "=" << answer << endl;
	}
	cout << "Определение палидрома" << endl;
	cout << "Введите число(не больше 5 знаков )";
	int numberp;
	cin >> numberp;
	int i{}, m{}, a{}, n{}, d{};
	if (numberp > 10 && numberp < 100)
	{
		i = int(numberp / 10);
		m = int(numberp / 10) * 10;
		a = numberp - m;
	}



	if (numberp > 100 && numberp < 1000)
	{
		i = int(numberp / 100);
		m = int(numberp / 10) * 10;
		a = numberp - m;
	}

	if (numberp > 1000 && numberp < 10000)
	{
		i = int(numberp / 1000);
		m = int(numberp / 10) * 10;
		a = numberp - m;
		n = int((numberp - int(numberp / 1000) * 1000) / 100);
		d = int((numberp - int(numberp / 100) * 100) / 10);

	}

	if (numberp > 10000 && numberp < 100000)
	{
		i = int(numberp / 10000);
		m = int(numberp / 10) * 10;
		a = numberp - m;
		n = int((numberp - int(numberp / 10000) * 10000) / 1000);
		d = int((numberp - int(numberp / 100) * 100) / 10);
	}

	if (i == a && n == d)
	{
		cout << "Число палиндром";
	}

	else
	{
		cout << "Число не палиндром";
	}


}