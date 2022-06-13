#include<iostream>
using namespace std;
int main()
{
    long long int n,num[10002]={0};
    int sum=0;
    cin >> n;
    for(long long int i=1;i<=n;i++)
    {
        if(i==1)
        {
            num[i]=1;
        }
        else
        {
            num[i]=num[i-1]*i;
            num[i]=num[i]%100000;
        }
        if(num[i]==0)
        {
            break;
        }
        sum=sum+(num[i]);
    }
    cout << sum % 100000 << endl;
}
