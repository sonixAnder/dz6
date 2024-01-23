#include <iostream>
using namespace std;
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "ru");
    double distance_AB, distance_BC;
    int cargo_weight;

    cout << "Введите расстояние между пунктами А и В: ";
    cin >> distance_AB;

    cout << "Введите расстояние между пунктами В и С: ";
    cin >> distance_BC;

    cout << "Введите вес груза: ";
    cin >> cargo_weight;

    cout << "Сравниваем данные и подсчитываем...\n" << endl;

    double fuel_consumption;
    if (cargo_weight <= 500) 
    {
        fuel_consumption = 1;
    }
    else if (cargo_weight <= 1000) 
    {
        fuel_consumption = 4;
    }
    else if (cargo_weight <= 1500) 
    {
        fuel_consumption = 7;
    }
    else if (cargo_weight <= 2000) 
    {
        fuel_consumption = 9;
    }

   
    else 
    {
        Sleep(3000);
        cout << "Груз слишком тяжёлый, самолёт не выдержит." << endl;
        return 0;
    }
    

    double fuel_needed = (distance_AB + distance_BC) * fuel_consumption;

    if (fuel_needed <= 300) 
    {
        Sleep(3000);
        cout << "Необходимо дозаправить " << fuel_needed << " литров топлива в пункте В." << endl;
    }

    else 
    {
        Sleep(3000);
        cout << "Слишком длинное расстояние, невозможно преодолеть." << endl;
    }

    return 0;
}
