#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,d;
    string num;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> num;
        a=0;b=0;d=0;
        for (int j = num.size() -1;j>=0;j--)
        {
            d++;
            if(a==0)
            {
                if(d==1)
                {
                    b+=(num[j]-48);
                }
                else if(d==2)
                {
                    b+=(num[j]-48)*10;
                }
            }
            if(d==3 && a==0)
            {
                b+=(num[j]-48)*100;
                d=0;
                a=1;
            }
            if(a==1)
            {
                if(d==1)
                {
                    b-=(num[j]-48);
                }
                else if(d==2)
                {
                    b-=(num[j]-48)*10;
                }
            }
            if(d==3 && a==1)
            {
                b-=(num[j]-48)*100;
                d=0;
                a=0;
            }
        }
        if(b%13==0)
        {

            cout << "true\n";
        }
        else
        {
            cout << "false\n";
        }
    }
}
