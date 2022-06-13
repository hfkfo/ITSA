#include<iostream>
using namespace std;
int main()
{
    int n,power[11],a;
    cin >> n;
    power[0]=1;
    for(int i=1;i<=10;i++)
    {
        power[i]=power[i-1]*2;
    }
    for(int i=0;i<n;i++)
    {
        cin >> a;
        cout << power[a] << endl;
    }
}
