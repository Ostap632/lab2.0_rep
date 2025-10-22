#include <iostream> 
#include <iomanip> 
#include <cmath> 
 
using namespace std; 
 
int main() 
{ 
    double x, R, xp, xk, dx, y; 
 
    cout << "R = "; cin  >> R; 
    cout << "xp = "; cin >> xp; 
    cout << "xk = "; cin >> xk; 
    cout << "dx = "; cin >> dx; 

    cout << fixed; 
    cout << "---------------------------" << endl; 
    cout << "|" << setw(5) << "y" << "     |" 
         << setw(10) << "value" << "    |" << endl; 
    cout << "---------------------------" << endl; 
    
    x = xp;
    while(x <= xk)
    {
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
                        y = R + sqrt(R*R - pow((x-R), 2));
                    else 
                        y = -1./2. * (x - (1 + R)); 
    
        
        cout << "|" << setw(7) << setprecision(2) << x 
             << "   |" << setw(10) << setprecision(3) << y
             << "    |" << endl; 
        x += dx; 
    }

    cout << "---------------------------" << endl; 

    cin.get(); 
    return 0; 
}