#include<iostream>
using namespace std;
int main()
{
    int a[2],b[2],c[2],sum=0;
    cin >> a[0] >> a[1];
    cin >> b[0] >> b[1];
    cin >> c[0] >> c[1];
    sum+=a[0]*a[1];
    sum+=b[0]*b[1];
    sum+=c[0]*c[1];
    cout << sum << endl;
}
