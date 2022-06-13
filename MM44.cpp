#include<iostream>
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
    int r=2,common=1,h=0,k=0;
    for(int i=0;i<=time1;i++)
    {
        if(r<=num[i])
        {
            k++;
        }
    }
    while(k>=2)
    {
        for(int i=0;i<=time1;i++)
        {
            if(num[i]%r==0)
            {
               h++;
            }
        }
        while(h>=2)
        {
            for(int i=0;i<=time1;i++)
            {
                if(num[i]%r==0)
                {
                    num[i]=num[i]/r;
                }
            }
            common=common*r;
            h=0;
            for(int i=0;i<=time1;i++)
            {
                if(num[i]%r==0)
                {
                    h++;
                }
            }
        }
        h=0;
        r++;
        k=0;
        for(int i=0;i<=time1;i++)
        {
            if(r<=num[i])
            {
                k++;
            }
        }
    }

    for(int i=0;i<=time1;i++)
    {
        common=common*num[i];
    }
    cout << "Lowest common multiple: " << common << endl;
}
