#include<iostream>
using namespace std;

#define UP_LEFT_CORNER		(char)218
#define UP_RIGHT_CORNER		(char)191
#define DOWN_LEFT_CORNER	(char)192
#define DOWN_RIGHT_CORNER	(char)217
#define HORIZ_LINE			(char)196
#define VERT_LINE			(char)179
#define WHITE_BOX			(char)219

void main()
{
	/*for (int i = 176; i < 224; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << i << "\t" << (char)i << " \n";
	}
	cout << endl;*/

	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер фигуры: "; cin >> n; n++;
	setlocale(LC_ALL, "C");	//Возвращает кодировку по умолчанию
	for (int i = 0; i <= n; i++)//Счетчик 'i' считает строки.
	{
		for (int j = 0; j <= n; j++)//Счетчик 'j' считает столбики.
		{
			if (i == 0 && j == 0)cout << UP_LEFT_CORNER;
			else if (i == 0 && j == n)cout << UP_RIGHT_CORNER;
			else if (i == n && j == 0)cout << DOWN_LEFT_CORNER;
			else if (i == n && j == n)cout << DOWN_RIGHT_CORNER;
			else if (i == 0 || i == n)cout << HORIZ_LINE << HORIZ_LINE;
			else if (j == 0 || j == n)cout << VERT_LINE;
			else (i + j) % 2 == 0 ? cout << WHITE_BOX << WHITE_BOX : cout << "  ";
		}
		cout << endl;
	}
}