#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        int cal=1;
        if(b==0)
        {
            cout<<"0";
            break;
        }
        while(b!=0)
        {
            cal*=b%10;
            b/=10;
        }
        cout<<cal<<endl;
    }
}
