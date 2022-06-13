#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int a=0,time=0,b,num[1000]={0},time1=0,c=1;
    char string[10000];
    cin.getline(string,10000); 
    while(string[a]!='\0')
    {
        if('0'<=string[a] && '9'>=string[a])
        {
            time++;
        }
        if(string[a]==' ')
        {
            b=a;
            for(int i=0;i<time;i++)
            {
                c=1;
                for(int j=0;j<i;j++)
                {
                    c=c*10;
                }
                b--;
                num[time1]+=(string[b]-48)*c;
            }
            time1++;
            time=0;
        }
        a++;
    }
    if(string[a]=='\0')
    {
        b=a;
        while('0'>string[b] || '9'<string[b])
        {
            b--;
        }
        for(int i=0;i<time;i++)
        {
            c=1;
            for(int j=0;j<i;j++)
            {
                c=c*10;
            }
            num[time1]+=(string[b]-48)*c;
            b--;
        }
    }
    double d,e,f;
    sort( num , num + time1 + 1);
    if((time1+2)%2==0)
    {
        cout << num[((time1+2)/2)-1] << endl;
    }
    else
    {
        d=num[((time1+2)/2)-1];
        e=num[((time1+2)/2)];
        f=(d+e)/2;
        cout << fixed << setprecision(1) << f << endl; 
    }
}
