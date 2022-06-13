#include<iostream>
using namespace std;
int main()
{
    int n,num[80000],a[80000]={0};
    cin >> n;
    for(int i=0;i<n-1;i++)
    {
       cin >> num[i];
        a[num[i]]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=1)
        {
            cout << i << endl;
            break;
        }
    }
}
