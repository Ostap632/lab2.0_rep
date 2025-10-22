#include <iostream> 
#include <iomanip> 
#include <cmath> 
using namespace std; 

int main() 
{ 
    double x, xp, xk, dx, a, b, c, F; 
    
    cout << "a = "; cin  >> a; 
    cout << "b = "; cin  >> b; 
    cout << "c = "; cin  >> c; 
    cout << "xp = "; cin >> xp; 
    cout << "xk = "; cin >> xk; 
    cout << "dx = "; cin >> dx; 
 
    cout << fixed; 
    cout << "---------------------------" << endl; 
    cout << "|" << setw(5) << "F" << "     |" 
         << setw(10) << "value" << "    |" << endl; 
    cout << "---------------------------" << endl; 
 
    x = xp; 
    while(x <= xk) 
    {  
        if (x < 0.6 && b + c != 0) 
            F = (a * pow(x, 2)) + pow(b, 2) + c; 
        else 
            if (x > 0.6 && b + c == 0) 
                F = (x - a) / (x - c); 
            else 
                F = (x / c) + (x / a); 
        cout << "|" << setw(7) << setprecision(2) << x 
             << "   |" << setw(10) << setprecision(3) << F
             << "    |" << endl; 
        x += dx; 
    } 
    cout << "---------------------------" << endl; 

    cin.get(); 
    return 0; 
}