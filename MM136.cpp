#include<iostream>
using namespace std;
int main()
{
    int a,b,num[1000]={0},time=0;
    cin >> a >> b;
    while(a!=0)
    {
        num[time]=a%b;
        a=a/b;
        time++;
    }
    for(int i=time-1;i>=0;i--)
    {
        cout << num[i];
    }
    cout << endl;
}
