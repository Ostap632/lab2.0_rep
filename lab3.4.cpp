// lab3.4.cpp 
// <Ліниця Остап> 
// Лабораторна робота № 3.4 
// Розгалуження, задане плоскою фігурою. 
// Варіант 12 
#include <iostream> 
using namespace std; 

int main() 
{ 
    double x;  // вхідний аргумент 
    double y;  // вхідний параметр 
    cout << "x = "; cin  >> x; 
    cout << "y = "; cin  >> y; 
    // розгалуження в повній формі 
    if ((y <= 3 - (x - 2)*(x - 2) && y >= x) ||   
        (y <= 3 - (x - 2)*(x - 2) && y >= -x && y <= 0)) 
        cout << "так" << endl; 
    else 
        cout << "ні" << endl; 
    cin.get(); 
    return 0; 
}