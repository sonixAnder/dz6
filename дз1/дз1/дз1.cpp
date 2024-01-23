#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    int number;
    cout << "-----------------------" << endl;
    cout << "Введите шестизначное число: ";
    cin >> number;

    
    if (number < 100000 || number > 999999)
    {
        cout << "АХТУНГ! Число не 6-ти значное, переписывай." << endl;
        return 0;
    }

    int digit1 = number / 100000;
    int digit2 = (number / 10000) % 10;
    int digit3 = (number / 1000) % 10;
    int digit4 = (number / 100) % 10;
    int digit5 = (number / 10) % 10;
    int digit6 = number % 10;

    if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6) 
    {
        cout << "Число является счастливым :)" << endl;
    }
    
    else 
    {
        cout << "Число несчастливое :(" << endl;
    }
    cout << "-----------------------" << endl;
    return 0;
}
