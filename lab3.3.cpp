// lab3.3.cpp 
// <Ліниця Остап> 
// Лабораторна робота № 3.3 
// Розгалуження, задане графіком функції. 
// Варіант 12 
 
#include <iostream> 
#include <cmath> 
 
using namespace std; 
 
int main() 
{ 
    double x;  // вхідний аргумент 
    double R;  // вхідний параметр 
    double y;  // результат обчислення виразу 
 
    cout << "R = "; cin  >> R; 
    cout << "x = "; cin  >> x; 
     
    // розгалуження в повній формі 
    if (x < -6) 
        y = R; 
    else 
        if (-6 <= x && x <= 0) 
            y = -1./6. * R * x; 
        else 
            if (0 <= x && x <= R) 
                y = R - sqrt(R*R - x*x); 
            else 
                if (R <= x && x <= 1 + R) 
                    y = R + sqrt(R*R - (x-R)*(x-R)); 
                else 
                    y = -1./2. * (x - (1 + R)); 
 
    cout << endl; 
    cout << "y = " << y << endl; 
 
    cin.get(); 
    return 0; 
}