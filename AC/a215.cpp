#include<iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int cal=a,i=1;
        while(cal<=b)
        {
            cal+=a+i;
            i++;
        }
        cout<<i<<endl;
    }
}
