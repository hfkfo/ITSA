#include<iostream>
using namespace std;
int main()
{
    int N,M,num[2000],min,max,a,divisor;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        a=2;
        divisor=1;
        cin >> M;
        for(int j=0;j<M;j++)
        {
            cin >> num[j];
            if(j==0)
            {
                min=num[j];
                max=num[j];
            }
            else
            {
                if(min>num[j])
                {
                    min=num[j];
                }
                if(max<num[j])
                {
                    max=num[j];
                }
            }
        }
        while(min>=a && max>=a)
        {
            while(min%a==0 && max%a==0)
            {
                max=max/a;
                min=min/a;
                divisor=divisor*a;
            }
            a++;
        }
        cout << divisor << endl;
    }
}
