#include<iostream>
using namespace std;
int main()
{
    int N,h,w,d,j=2,mins1,minv1;
    double a,b,surface,volume,mins,minv;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> h >> w >> d;
        surface=(h*w+w*d+d*h)*2;
        volume=h*d*w;
        if(i==0)
        {
            mins=surface;
            minv=volume;
        }
        else
        {
            a=mins/minv;
            b=surface/volume;
            if(a>=b)
            {
                mins=surface;
                minv=volume;
            }
        }
    }
    mins1=mins;
    minv1=minv;
    while(mins1>=j && minv1>=j)
    {
        while(mins1%j==0 && minv1%j==0)
        {
            mins1=mins1/j;
            minv1=minv1/j;
        }
        j++;
    }

    cout << mins1 << "/" << minv1 << endl;
}
