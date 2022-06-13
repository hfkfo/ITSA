#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int S,N,th;
    double p,r,a,sum;
    cin >> S;
    for(int i=0;i<S;i++)
    {
        cin >> N >> p >> th;
        r=1;
        for(int j=0;j<N;j++)
        {
            r=r*(1-p);
        }
        a=p;
        for(int j=1;j<th;j++)
        {
            a=a*(1-p);
        }
        sum=a/(1-r);
        cout << fixed << setprecision(4) << sum << endl;
    }
}
