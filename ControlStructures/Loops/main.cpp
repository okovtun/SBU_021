#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE_LOOP

//#define SHOOTER_IF

#define PALINDROME

//for

#define ArrowUp		72
#define ArrowDown	80
#define ArrowLeft	75
#define ArrowRight	77
#define Escape	27

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_LOOP
	//int i = 0;	//Счетчик цикла
	int n;	//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	/*while (++i < n)
	{
		cout << i << "Hello World!\n";
	}*/

	while (n--)
	{
		cout << n << " Hello World!\n";
	}
#endif // WHILE_LOOP

	char key;	//Хранит код клавиши
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
#ifdef SHOOTER_IF
		if (key == 'w' || key == 'W' || key == ArrowUp)
			cout << "Вперед" << endl;
		else if (key == 's' || key == 'S' || key == ArrowDown)
			cout << "Назад" << endl;
		else if (key == 'a' || key == 'A' || key == ArrowLeft)
			cout << "Влево" << endl;
		else if (key == 'd' || key == 'D' || key == ArrowRight)
			cout << "Вправо" << endl;
		else if (key == ' ')
			cout << "Прыжок" << endl;
		else if (key == 13)
			cout << "Огонь" << endl;
		else if (key == Escape)
			cout << "Выход" << endl;
		else
			if (key != -32) cout << "Error" << endl;
#endif // SHOOTER_IF

		switch (key)
		{
		case ArrowUp:
		case 'w':case 'W':cout << "Вперед" << endl; break;
		case ArrowDown:
		case 's':case 'S':cout << "Назад" << endl; break;
		case ArrowLeft:
		case 'a':case 'A':cout << "Влево" << endl; break;
		case ArrowRight:
		case 'd':case 'D':cout << "Вправо" << endl; break;
		case ' ':cout << "Прыжок" << endl; break;
		case  13:cout << "Огонь" << endl; break;
		case Escape:
		case -32:break;
		default: cout << "Error" << endl;
		}
	}
	while (key != Escape);

	/*int number;
	int reverse_number = 0;
	cout << "Type number: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse_number *= 10;
		reverse_number += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << buffer<< endl;
	cout << reverse_number << endl;*/
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
}