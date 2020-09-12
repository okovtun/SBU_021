#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define DATA_TYPES
//#define NAMES
#define TYPE_CONVERSIONS

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined DATA_TYPES	//Если определено DATA_TYPES, то нижеследующий код, до директивы #endif, будет виден компилятору
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
	cout << "Стоимость чашки кофе: ";
	cin >> price_of_coffee;
	cout << "Сколько чашек Вам нужно?";
	cin >> number_of_cups;

	float total_price = price_of_coffee * number_of_cups;
	cout << "Общая стоимость: " << price_of_coffee << " * " << number_of_cups << ":" << total_price << " р.\n";
#endif

#if defined TYPE_CONVERSIONS
	/*float a = 2.55;
	cout << a << endl;
	int b = a;
	cout << b << endl;*/

	double money;
	cout << "Введите сумму: "; cin >> money;
	cout << money << endl;
	int grn = money;
	cout << grn << endl;
#endif
}

//0.5