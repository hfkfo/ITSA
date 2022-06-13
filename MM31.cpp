#include<iostream>
using namespace std;
int main()
{
    int M,num,answer;
    cin >> M;
    for(int i=0;i<M;i++)
    {
        answer=1;
        cin >> num;
        for(int j=1;j<=num;j++)
        {
            answer=answer*j;
        }
        cout << answer << endl;
    }
}
