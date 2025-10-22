#include <iostream> 
#include <cmath> 
using namespace std; 

int main() 
{ 
    int N, i; 
    double S; 
 
    cout << "N = "; cin >> N; 

    S = 0; 
    i = N; 
    while (i <= 22) 
    { 
        S += sqrt(pow(i, 2) + pow(N, 2)) / i; 
        i++; 
    }
    cout << "S = " << S << endl; 

    
    S = 0; 
    i = N; 
    do { 
        S += sqrt(pow(i, 2) + pow(N, 2)) / i; 
        i++; 
    } while (i <= 22); 
    cout << "S = " << S << endl; 

    S = 0; 
    for (i = N; i <= 22; i++) 
    { 
        S += sqrt(pow(i, 2) + pow(N, 2)) / i; 
    } 
    cout << "S = " << S << endl; 

    S = 0; 
    for (i = 22; i >= N; i--) 
    { 
        S += sqrt(pow(i, 2) + pow(N, 2)) / i; 
    } 
    cout << "S = " << S << endl; 
    
    return 0; 
} 