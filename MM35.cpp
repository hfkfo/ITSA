#include<iostream>
using namespace std;
int main()
{
    int N,num,time;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> num;
        for(int i=2;i<=num;i++)
        {
            time=0;
            while(num%i==0)
            {
                num=num/i;
                time++;
            }
            if(num!=1)
            {
                if(time==1)
                {
                    cout << i << "*";
                }
                if(time>1)
                {
                    cout << i << "^" << time << "*";
                }
            }
            else
            {
                if(time==1)
                {
                    cout << i << endl;
                }
                if(time>1)
                {
                    cout << i << "^" << time <<endl;
                }
            }
        }
    }
}
