#include<iostream>
using namespace std;
int main()
{
    long long a;
    while(cin>>a)
    {
        long long ans=0;
        for(long long i=1;i<=a/2;i++)
        {
            if(a%i==0)
                ans+=i;
        }
        if(ans>a)
            cout<<"�ռ�"<<endl;
        else if(ans==a)
            cout<<"������"<<endl;
        else
            cout<<"����"<<endl;
    }
}
