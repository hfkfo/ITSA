#include<iostream>
using namespace std;
int main()
{
    int n,sum,c;
    string a,b;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        sum=0;c=1;
        cin >> a >> b;
        for(int j=0;j<8;j++)
        {
            if(a[j]=='1' || b[j]=='1')
            {
                for(int h=1;h<=(8-j-1);h++)
                {
                    c*=2;
                }
                if(a[j]=='1' && b[j]=='1')
                {
                    sum+=c;
                }
                sum+=c;
                c=1;
            }
        }
        cout << sum << endl;

    }
}
