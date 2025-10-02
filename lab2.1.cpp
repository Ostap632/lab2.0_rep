// lab2.1.cpp 
// <Ліниця Остап> 
// Лабораторна робота № 2.1
// Лінійні програми. 
// Варіант 12
#include <iostream> 
#include <cmath> 
using namespace std; 


int main() 
{
    const double pi = 4 * atan(1.); // число пі
    double x;  // вхідний параметр 
    double z1; // результат обчислення 1-го виразу 
    double z2; // результат обчислення 2-го виразу
    double rad;
 
    cout << "x = "; cin >> x; 
    rad = x * pi / 180.0;
 
    z1 = (sin(4*rad) / (1 + cos(4*rad))) * (cos(2*rad) / (1 + cos(2*rad))); 
    z2 = 1.0 / tan((3.0 / 2.0) * pi - rad);
 
    cout << endl; 
    cout << "z1 = " << z1 << endl; 
    cout << "z2 = " << z2 << endl; 
 
    cin.get(); 
    return 0; 
}