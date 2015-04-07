#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(max(max(a,b),c)==a)
        {
            if(a>(b+c))
                cout<<"A"<<endl;
            else
            {
                if(max(b,c)==b)
                    cout<<"B"<<endl;
                else
                    cout<<"C"<<endl;
            }
        }
        else if(max(max(a,b),c)==b)
        {
            if(b>(a+c))
                cout<<"B"<<endl;
            else
            {
                if(max(a,c)==a)
                    cout<<"A"<<endl;
                else
                    cout<<"C"<<endl;
            }
        }
        else if(max(max(a,b),c)==c)
        {
            if(c>(b+a))
                cout<<"C"<<endl;
            else
            {
                if(max(b,a)==b)
                    cout<<"B"<<endl;
                else
                    cout<<"A"<<endl;
            }
        }
    }
}
