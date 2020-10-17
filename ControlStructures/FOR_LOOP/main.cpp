#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;	//Количество итераций
	cout << "Введите количнство итераций: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
}


//for (start; stop; step)
//{
//	group - of - statements;
//}

