#include<iostream>
using namespace std;
int main()
{
    int a,b,sum=0;
    cin >> a >> b;
    for(int i=a;i<=b;i++)
    {
        if(i%2==1)
        {
            sum=sum+i;
        }
    }
    cout << sum << endl;
}
