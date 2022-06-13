#include<iostream>
using namespace std;
int main()
{
    int n,num[3002],min,max,a,judge[3002]={0},h;
    cin >> n;
    a=1;
    for(int i=0;i<n;i++)
    {
        cin >> num[i];
        if(i>=1 && a!=0)
        {
            h=num[i]-num[i-1];
            if(h<=n-1 && h>=-n+1 && h!=0 && judge[h]==0)
            {
                judge[h]=1;
            }
            else if(h>n-1 || h<-n+1 || h==0 || judge[h]==1)
            {
                a=0;
            }
        }
    }
    if(a==1)
    {
        cout << "Jolly\n";
    }
    else
    {
        cout << "Not jolly\n";
    }
}
