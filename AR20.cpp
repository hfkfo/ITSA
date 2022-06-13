#include<iostream>
using namespace std;
int main()
{
    int c=0;
    string a,b;
    cin >> a;
    for(int i=a.size() - 1;i>=0;i--)
    {
        b = b + a[i];
    }
    for(int i=0;i< a.size();i++)
    {
        if(a[i]!=b[i])
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        cout<<"yes"<< endl;
    }
    else
    {
        cout << "no" << endl;
    }
}
