#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    double k = 1.09; // Hydraulic Constant
    double t = 2.0;  // Assumed time of rain fall.
    double F= k*t;  // Assumed Initial value of 'F'
    double psi = 11.01; // Suction Head value in cm.
    double deltheta = 0.044333333;  // Delta theta or soil capacity.
    double tp = 0.952452381;     // Time of ponding.
    double fp = 1.400105;    
    
    
    double ft=0;    // Initializing with some random value.
    double c=psi*deltheta; // Constant value for each event (psi*Del theta)
    
    double tt = t - tp;
    double p;
    // long long n=0;
    while(ft!=F)
    {
        p = (c+F)/(c+fp);
        
        double x = log(p);
        
        ft = fp + k*tt + c*x;
        
        if (ft==F)
        {
            break;
        }
        else
        {
            F=ft;
            ft=0;
        }
        // n++;
        
    }
    cout << n << endl;
    cout<< ft << endl;
    return 0;
}




