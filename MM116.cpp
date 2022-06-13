#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c;
    string num;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> num;
        a=0;b=0;
        for (int j=0;j < num.size() ;j++)
        {
            if(j%2==0)
            {
                a+=(num[j]-48);
            }
            else
            {
                b+=(num[j]-48);
            }
        }
        if(a>b)
        {
            c=a-b;
        }
        else
        {
            c=b-a;
        }
        if(c%11==0)
        {
            cout << "true\n";
        }
        else
        {
            cout << "false\n";
        }
    }
}
