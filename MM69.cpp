#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double h,w,bmi;
    cin >> h >> w;
    bmi=w/(h*h);
    bmi=bmi*10000;
    if(bmi<18.5)
    {
        cout << fixed <<setprecision(1) << bmi << " underweight\n";
    }
    else if(18.5<= bmi && 24>bmi)
    {
        cout << fixed <<setprecision(1) << bmi << " normal\n";
    }
    else if(24<= bmi && 27>bmi)
    {
        cout << fixed <<setprecision(1) << bmi << " overweight\n";
    }
    else if(27<= bmi && 30>bmi)
    {
        cout << fixed <<setprecision(1) << bmi << " mild obesity\n";
    }
    else if(30<= bmi && 35>bmi)
    {
        cout << fixed <<setprecision(1) << bmi << " moderate obesity\n";
    }
    else
    {
        cout << fixed <<setprecision(1) << bmi << " severe obesity\n";
    }
}
