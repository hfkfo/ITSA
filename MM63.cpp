#include<iostream>
using namespace std;
int main()
{
    int num,r=2,time,a=0,c=0;
    cin >> num;
    while(num>=r)
    {
        time=0;
        while(num%r==0)
        {
            num=num/r;
            time++;
            a=1;
        }
        if(time!=0 && a==1 && c==0)
        {
            cout << r << "^" << time;
            c=1;
        }
        else if(time!=0)
        {
            cout << " x " << r << "^" << time;
        }
        r++;
    }
    cout << endl;
}
