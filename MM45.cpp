#include<iostream>
using namespace std;
int main()
{
    int long1[4],max=0,min=0,a;
    for(int i=0;i<3;i++)
    {
        cin >> long1[i];
        if(long1[max]<long1[i])
        {
            max=i;
        }
        if(long1[min]>long1[i])
        {
            min=i;
        }
    }
    for(int i=0;i<3;i++)
    {
        if(i!=max && i!=min)
        {
            a=i;
        }
    }
    if(long1[0]<=0 || long1[1]<=0 || long1[2]<=0)
    {
        cout<<"invalid\n";
    }
    else if(long1[max]>=long1[min]+long1[a])
    {
        cout << "invalid\n";
    }
    else
    {
        if(long1[max]*long1[max]==long1[min]*long1[min]+long1[a]*long1[a])
        {
            cout << "right\n";
        }
        else if(long1[max]*long1[max]>long1[min]*long1[min]+long1[a]*long1[a])
        {
            cout << "obtuse\n";
        }
        else
        {
            cout << "acute\n";
        }
    }
}
