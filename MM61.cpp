#include<iostream>
using namespace std;
int main()
{
    int num,leg,tail,rabbit,chicken,crab,a=0;
    cin >> num >> leg >> tail;
    crab=num-tail;
    rabbit=leg-(8*crab)-(2*tail);
    if(rabbit%2==0)
    {
        rabbit=rabbit/2;
    }
    else
    {
        a=1;
    }
    if(a==0)
    {
        chicken=num-crab-rabbit;
        if(crab<0 || rabbit<0 || chicken<0)
        {
            cout << "No solution\n";
        }
        else
        {
            cout << chicken << " " << rabbit << " " << crab << endl;
        }
    }
    else
    {
        cout << "No solution\n";
    }

}
