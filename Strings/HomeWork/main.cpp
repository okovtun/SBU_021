#include<iostream>
#include<Windows.h>
#include<conio.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

void InputLine(char str[], const int n);
int StrLen(char str[]);

void to_upper(char str[]);
void to_lower(char str[]);
void shrink(char str[]);
bool is_palindrome(char str[]);
bool is_number(char str[]);

//#define ClassWork

#ifdef ClassWork
void main()
{
	setlocale(LC_ALL, "");
	'\0';  //ASCII-������ � ����� 0
	//Null terminated lines
	//char str[5] = { 'H','e','l','l','o' };
	//for (int i = 0; i < 5; i++)cout << str[i]; cout << endl;
	//cout << str << endl;
	/*char str[] = "Hello";
	cout << str << endl;*/

	//system("CHCP 1251");
	const int n = 20;
	char str[n];
	cout << "������� ������: ";
	InputLine(str, n);
	cout << str << endl;
	cout << "����� ������: " << StrLen(str) << endl;
}
#endif // ClassWork
void ASCII()
{
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
}
void main()
{
	setlocale(LC_ALL, "");
	cout << (int)'1' << endl;
	//ASCII();
	const int n = 1500;
	char str[n];
	cout << "������� ������: ";
	InputLine(str, n);
	cout << "������� 'U', ���� ������ ��������� ������ � ������� �������, ���� ����� ������ �������, ����� ��������� ������ � ������ �������." << endl;
	char ch;                     // �������
	ch = _getch();              //  ������ �������
	cout << (int)ch << endl;
	switch (ch)
	{
	case 'U': 
	case -125: 
	case -93: 
	case 'u': to_upper(str); break;
	case 'L': 
	case 'l': to_lower(str); break;
	//default: to_lower(str);	break;
	}
	cout << str << endl;
	cout << "������� ������: ";
	InputLine(str, n);
	system("CLS");
	cout << str << endl;
	shrink(str);
	cout << str << endl;
	cout << "������� �����: ";
	InputLine(str, n);
	system("CLS");
	cout << str << endl;
	is_number(str) ? cout << "�� - ��� �����!" : cout << "��� �� �����!";
	cout << endl;
	cout << "������� ������: ";
	InputLine(str, n);
	system("CLS");
	cout << str << endl;
	is_palindrome(str) ? cout << "��� ������ ���������!" : cout << "��� ������ �� �������� �����������!";
}

void InputLine(char str[], const int n)
{
	SetConsoleCP(1251);
	//cin >> str;
	cin.getline(str, n);
	SetConsoleCP(866);
}
int StrLen(char str[])
{
	//���������� ����� ������
	int i = 0;
	for (; str[i]; i++);
	return i;
}
void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= '�' && str[i] <= '�' || str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
}
void to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= '�' && str[i] <= '�' || str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
}
void shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		//������� ������� ������� ������
		while (str[0] == ' ')
		{
			for (int j = 0; str[j]; j++)
			{
				str[j] = str[j + 1];
			}
		}
		//������� ������ ������� ����� � ������
		while (str[i] == ' ' && str[i + 1] == ' ')
		{
			for (int j = i + 1; str[j]; j++)
			{
				str[j] = str[j + 1];
			}
		}
	}
}
bool is_palindrome(char str[])
{
	to_lower(str);
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == ' ')
		{
			for (int j = i; str[j]; j++)
			{
				str[j] = str[j + 1];
			}
		}
	}
	int j = StrLen(str);
	int i = 0;
	do
	{
		str[i] == str[j - 1] ? i++ : i = 0;
		j--;
	} while (i && j);
	return i;
}
bool is_number(char str[])
{
	int i = 0;
	do
	{
		str[i] >= '0' && str[i] <= '9' || str[i] == ' ' ? i++ : i = 0;  // ������� ����� ������, ���� ��� �� �����
	} while (i && str[i]);
	return i;
}