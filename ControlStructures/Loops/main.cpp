#include<iostream>
#include<conio.h>
using namespace std;

//#define WHILE_LOOP

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_LOOP
	//int i = 0;	//������� �����
	int n;	//���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	/*while (++i < n)
	{
		cout << i << "Hello World!\n";
	}*/

	while (n--)
	{
		cout << n << " Hello World!\n";
	}
#endif // WHILE_LOOP

	char key;	//������ ��� �������
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	}
	while (key != 27);
}