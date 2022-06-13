#include<iostream>
using namespace std;
int main()
{
    int n,integer[101][3],sum[101]={0},a,b,min,k;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >>integer[i][0]>>integer[i][1];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                a=integer[i][0]-integer[j][0];
                b=integer[i][1]-integer[j][1];
                if(sum[i]<a*a+b*b)
                {
                    sum[i]=a*a+b*b;
                }
            }
        }
        if(i==0)
        {
            min=sum[i];
            k=0;
        }
        else
        {
            if(min>sum[i])
            {
                min=sum[i];
                k=i;
            }
            else if(min==sum[i])
            {
                if(integer[k][0]>integer[i][0])
                {
                    min=sum[i];
                    k=i;
                }
                else if(integer[k][0]==integer[i][0])
                {
                    if(integer[k][1]>integer[i][1])
                    {
                        min=sum[i];
                        k=i;
                    }
                }
            }
        }
    }
    cout << integer[k][0] <<" "<< integer[k][1] << endl;
}
