#include<iostream>
using namespace std;
int main()
{
    int sum;
    string a;
    cin >> a;
    while(a.size() !=3 || a[0]!='e' || a[1]!='n' || a[2]!='d')
    {
        sum=0;
        for(int i=0;i<a.size() ;i++)
        {
           if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' ||a[i]=='u')
           {
               sum+=5;
           }
           else if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' ||a[i]=='U')
           {
               sum+=6;
           }
           else if(98<=a[i] && 122>=a[i])
           {
               sum+=2;
           }
           else if(66<=a[i] && 90>=a[i])
           {
               sum+=3;
           }
        }
        cout << sum << endl;
        cin >> a;
    }
}
