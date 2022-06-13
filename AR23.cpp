#include<iostream>
using namespace std;
int main()
{
    char a[2000];
    int i=0;
    cin.getline(a,2000);
    while(a[i]!='\0')
    {
        if(a[i]>=65 && a[i]<78)
        {
            a[i]=a[i]+13;
        }
        else if(a[i]>=78 && a[i]<=90)
        {
            a[i]=a[i]-13;
        }
        else if(a[i]>=97 && a[i]<110)
        {
            a[i]=a[i]+13;
        }
        else if(a[i]>=110 && a[i]<=122)
        {
            a[i]=a[i]-13;
        }
        i++;
    }
   cout << a <<endl;
}
