#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double c,f,a;
    cin >> c;
    f=c*9;
    f=f/5;
    f=f+32;
    a=c+273.15;
    cout << "Fahrenheit = " << fixed << setprecision(2) << f << endl;
    cout << "Absolute temperature = " << fixed << setprecision(2) << a << endl;
}
