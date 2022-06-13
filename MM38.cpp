#include<iostream>
using namespace std;
int main()
{
    char fraction[50];
    string fraction1,fraction2,fraction3,fraction4;
    int j = 0;
    long long int a,b,c,d;
    cin.getline(fraction,50);
    while(fraction[j] != '/')
    {
        fraction1 = fraction1 + fraction[j];
        j++;
    }
    fraction1 = fraction1 + '\0';
    j++;
    while(fraction[j] != ' ')
    {
        fraction2 = fraction2 + fraction[j];
        j++;
    }
    fraction2 = fraction2 + '\0';
    j++;
    while(fraction[j] != '/')
    {
        fraction3 = fraction3 + fraction[j];
        j++;
    }
    fraction3 = fraction3 + '\0';
    j++;
    while(fraction[j] != '\0')
    {
        fraction4 = fraction4 + fraction[j];
        j++;
    }
    fraction4 = fraction4 + '\0';
    j++;
    a = stoi(fraction1);
    b = stoi(fraction2);
    c = stoi(fraction3);
    d = stoi(fraction4);
    while( b!=0 &&d!=0)
    {
        long long int r,b1,d1,num,common,answer;
        b1=b;d1=d;num=1;r=2;
        while(b1>=r && d1>=r)
        {
            while(b1%r==0 && d1%r==0)
            {
                b1=b1/r;
                d1=d1/r;
                num=num*r;
            }
            r++;
        }
        common=b1*d1*num;
        a=a*(common/b);
        c=c*(common/d);
        answer=a+c;
        num=1;r=2;
        while(answer>=r && common>=r)
        {
            while(answer%r==0 && common%r==0)
            {
                answer=answer/r;
                common=common/r;
                num=num*r;
            }
            r++;
        }
        cout << answer <<"/" << common <<  endl;
        fraction1.clear();
        fraction2.clear();
        fraction3.clear();
        fraction4.clear();
        cin.getline(fraction,50);
        j = 0;
        while(fraction[j] != '/')
        {
            fraction1 = fraction1 + fraction[j];
            j++;
        }
        fraction1 = fraction1 + '\0';
        j++;
        while(fraction[j] != ' ')
        {
            fraction2 = fraction2 + fraction[j];
            j++;
        }
        fraction2 = fraction2 + '\0';
        j++;
        while(fraction[j] != '/')
        {
            fraction3 = fraction3 + fraction[j];
            j++;
        }
        fraction3 = fraction3 + '\0';
        j++;
        while(fraction[j] != '\0')
        {
            fraction4 = fraction4 + fraction[j];
            j++;
        }
        fraction4 = fraction4 + '\0';
        j++;
        a = stoi(fraction1);
        b = stoi(fraction2);
        c = stoi(fraction3);
        d = stoi(fraction4);
    }
}
