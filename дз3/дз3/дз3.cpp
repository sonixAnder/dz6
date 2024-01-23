#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n1, n2, n3, n4, n5, n6, n7, maxNumber;

	cout << "Введи 1-ое число: ";
	cin >> n1;

	cout << "Введи 2-ое число: ";
	cin >> n2;

	cout << "Введи 3-ое число: ";
	cin >> n3;

	cout << "Введи 4-ое число: ";
	cin >> n4;

	cout << "Введи 5-ое число: ";
	cin >> n5;

	cout << "Введи 6-ое число: ";
	cin >> n6;

	cout << "Введи 7-ое число: ";
	cin >> n7;

	if (n1 > n2)
	{
		maxNumber = n1;
	}
	else
	{
		maxNumber = n2;
	}

	if (n3 > maxNumber)
	{
		maxNumber = n3;
	}

	if (n4 > maxNumber)
	{
		maxNumber = n4;
	}

	if (n5 > maxNumber)
	{
		maxNumber = n5;
	}

	if (n6 > maxNumber)
	{
		maxNumber = n6;
	}

	if (n7 > maxNumber)
	{
		maxNumber = n7;
	}

	cout << "Ищу самое большое число, подожди немного...\n" << endl;

	Sleep(5000);
	cout <<"Нашёл! Самое большое число: " << maxNumber << endl;

	return 0;
}