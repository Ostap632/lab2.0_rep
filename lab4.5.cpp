#include <iostream> 
#include <iomanip> 
#include <time.h> 
#include <cstdlib>
using namespace std; 

int main() 
{ 
    double x, y, R; 

    cout << "R = "; cin >> R;
    
    srand((unsigned) time(0)); 
    for (int i = 0; i < 10; i++) 
    {
        cout << "x = "; cin >> x; 
        cout << "y = "; cin >> y;

        if ((y <= 3 - (x - 2)*(x - 2) && y >= x) || (y <= 3 - (x - 2)*(x - 2) && y >= -x && y <= 0))
            cout << setw(8) << setprecision(4) << x << "  " 
            << setw(8) << setprecision(4) << y << "  " << "так" << endl;  
        else 
            cout << setw(8) << setprecision(4) << x << "  " 
            << setw(8) << setprecision(4) << y << "  " << "ні" << endl; 
    } 

    cout << endl << fixed;
     
    for (int i = 0; i < 10; i++) 
    {  
        x = 2.0 * R * rand() / RAND_MAX - R;
        y = 2.0 * R * rand() / RAND_MAX - R;

        if ((y <= 3 - (x - 2)*(x - 2) && y >= x) || (y <= 3 - (x - 2)*(x - 2) && y >= -x && y <= 0))
            cout << setw(8) << setprecision(4) << x << "  " 
                 << setw(8) << setprecision(4) << y << "  " << "так" << endl;  
        else 
            cout << setw(8) << setprecision(4) << x << "  " 
                 << setw(8) << setprecision(4) << y << "  " << "ні" << endl; 
    } 

    cin.get();
    return 0; 
} 