#include<iostream>
using namespace std;
int main()
{
    int n,a,num;
    cin >> n;
    while(n!=0)
    {
        num=0;
        for(int i=2;i<n;i++)
        {
            a=0;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    a=1;
                    break;
                }
            }
            if(a==0)
            {
                num++;
            }
        }
        cout << num << endl;
        cin >> n;
    }
}
