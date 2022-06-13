#include<iostream>
using namespace std;
int main()
{
    int N[3]={0},M[8]={0},num=0,m,n;
    cin >> n >> m;
    for(int i=1;i>=0;i--)
    {
        N[i]=n%10;
        n=n/10;
    }
    for(int i=6;i>=0;i--)
    {
        M[i]=m%10;
        m=m/10;
    }

    for(int i=0;i<6;i++)
    {
        if(M[i]==N[0])
        {
            if(M[i+1]==N[1])
            {
                num++;
            }
        }
    }
    cout << num << endl;
}
