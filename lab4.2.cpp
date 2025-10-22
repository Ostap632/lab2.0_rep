#include <iostream> 
#include <iomanip> 
#include <cmath> 
 
using namespace std; 
 
int main() 
{ 
    double x, xp, xk, dx, A, B, y; 
 
    cout << "xp = "; cin >> xp; 
    cout << "xk = "; cin >> xk; 
    cout << "dx = "; cin >> dx; 
 
    cout << fixed; 
    cout << "---------------------------" << endl; 
    cout << "|" << setw(5) << "x" << "     |" 
         << setw(7) << "y" << "       |" << endl; 
    cout << "---------------------------" << endl; 
 
    x = xp; 
    while(x <= xk) 
    { 
        A = ((2 + x) / pow(x, 2)) + 1; 
        if(x < 0) 
            B = pow(x, 3) - 2 * pow(x, 4); 
        else 
            if(x >= 0 && x <= 2) 
                B = pow(fabs(x) + exp(x), 3); 
            else 
                B = 4 * cos(pow(x, 2) - 2); 
        y = A + B; 
        cout << "|" << setw(7) << setprecision(2) << x 
             << "   |" << setw(10) << setprecision(3) << y 
             << "    |" << endl; 
        x += dx; 
    } 
    cout << "---------------------------" << endl; 
 
    return 0; 
}