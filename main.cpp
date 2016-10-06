#include <iostream>
#include <stdlib.h>
#include <math.h>


using namespace std;
int main()
{
// Эта программа является конвертером расстояний
// Сначала пользователь вводит тип длинны
    cout << "Enter the number of unit:\n1-Kilometer\n2-meter\n3-centimeter\n4-millimeter" << endl;
    int unit1, unit2;

    cin >>unit1;
    cout << "enter the length: "; //Потом пользователь должен ввести размер длинны
    double x, y, z;
    cin >>x;

    cout << "\nEnter the desired Unit:\n1-Kilometer\n2-meter\n3-centimeter\n4-millimeter" << endl;
    cin >>unit2;

    switch (unit1) {//введенная ед. из. переводится в метры для удобства подсчета
        case 1: {
            cout << "Kilometer-" << x;
            y=x*1000;
            break;
        }
        case 2: {
            cout << "meter-" << x;
            y=x;
            break;
        }
        case 3: {
            cout << "centimeter-" << x;
            y=x/100;
            break;
        }
        case 4: {
            cout << "millimeter-" << x;
            y=x/1000;
            break;
        }
        default:{
            cout <<"\nError"; exit(0);
        }
    }

    switch (unit2) {//Из метров производится перевод в желаемую еденицу измерения
        case 1: {
            z=y/1000;
            cout << "= Kilometer-" << z;
            break;
        }
        case 2: {
            z=y;
            cout << "= meter-" << z;
            break;
        }
        case 3: {
            z=y*100;
            cout << "= centimeter-" << z;
            break;
        }
        case 4: {
            z=y*1000;
            cout << "= millimeter-" << z;
            break;
        }
        default:{
            cout <<"\nError"; exit(0);
        }
    }
    return 0;
}