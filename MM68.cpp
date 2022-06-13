#include<iostream>
using namespace std;
int main()  
{  
    int a,b,L,r;  
    while( cin >> a >> b >> L)
    {
        r = L;  
        while(r >= 1)  
        {  
            if(a % r == 0 && b % r == 0)  
            {  
                break;  
            }  
            r--;  
        }  
        cout << r << endl; 
    }  
    
}  