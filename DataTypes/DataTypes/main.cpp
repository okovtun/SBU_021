#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define PI 3.14

//#define DATA_TYPES
//#define NAMES
//#define TYPE_CONVERSIONS
//#define CONSTANTS
#define INIT

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined DATA_TYPES	//���� ���������� DATA_TYPES, �� ������������� ���, �� ��������� #endif, ����� ����� �����������
	//cout << false << endl;
	//cout << (bool)0.0001 << endl;
	cout << sizeof(double) << endl;
	cout << DBL_MIN << "\t" << DBL_MAX << endl;
	//cout << 0 << "..." << ULLONG_MAX << endl;
	cout << 2.5 << endl;
	cout << "\n---------------------------------------\n";
#endif

#if defined NAMES
	/*float price_of_coffee;
	int cammelCaseStyle;
	int smallCammel;
	int BigCammel;
	int pascalCaseStyle;
	float snake_case_style;*/

	float price_of_coffee;
	int number_of_cups;
	cout << "��������� ����� ����: ";
	cin >> price_of_coffee;
	cout << "������� ����� ��� �����?";
	cin >> number_of_cups;

	float total_price = price_of_coffee * number_of_cups;
	cout << "����� ���������: " << price_of_coffee << " * " << number_of_cups << ":" << total_price << " �.\n";
#endif

#if defined TYPE_CONVERSIONS
	/*float a = 2.55;
	cout << a << endl;
	int b = a;
	cout << b << endl;*/

	double money;
	cout << "������� �����: "; cin >> money;
	cout << money << endl;
	int grn = money;
	cout << grn << endl;
#endif

#if defined CONSTANTS
	int speed = 0;
	const int MAX_SPEED = 250;
	cout << PI << endl;
	cout << typeid(.5f).name() << endl;	//�������� ��������� ���� int
	cout << .5 << endl;
	//http://cplusplus.com/doc/tutorial/constants/

	cout << "++sdfsdfsdfsdfs" << endl;
	cout << typeid('+').name() << endl;
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	cout << sizeof "Hello" << endl;
#endif
	//�������������������
#if defined INIT
	int a = 2;
	cout << a << endl;
#endif
}

//0.5