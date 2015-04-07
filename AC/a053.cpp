#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        if(a<=10)
        {
            cout<<a*6<<endl;
        }
        else if(a>10 && a<=20)
        {
            int cal = 60+ (a-10)*2;
            cout<<cal<<endl;
        }
        else if(a>20 && a<=40)
        {
            int cal =80+(a-20)*1;
            cout<<cal<<endl;
        }
        else
        {
            cout<<100<<endl;
        }
    }
}
