#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int number;

	cout << "Вводи число, поменяю местами числа: ";
	cin >> number;

	if (number < 1000 || number > 9999) {
		cout << "АХТУНГ! Число не 4-ёх значное." << endl;
		return 0;
	}

	int digit1 = (number / 1000) % 10;
	int digit2 = (number / 100) % 10;
	int temp = digit1;
	digit1 = digit2;
	digit2 = temp;


	int digit3 = (number / 10) % 10;
	int digit4 = number % 10;
	temp = digit3;
	digit3 = digit4;
	digit4 = temp;

	
	int result = digit1 * 1000 + digit2 * 100 + digit3 * 10 + digit4;
	cout << "Меняю, подожди немного..." << endl;
	Sleep(5000);
	cout << "Поменял твои числа местами, вот: " << result << endl;

	return 0;
}