//Calcular el area de un círculo

#include "iostream"
#include "math.h"

//Constante simbolica
#define pi 3.1416

using namespace std;

int main() 
{
    system("cls");
    system("color 70");
    setlocale(LC_ALL, "");
    float ra, area, area1;
    cout << "\n\tLenguaje de programación C++";
    cout << "\n\tDigíte el radio del círculo ";
    cin >> ra;
    area = pi * pow(ra, 2);
    cout << area;
    system("pause");
}
