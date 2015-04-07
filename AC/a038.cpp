#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        if(a==0)
        {
            cout<<0;
        }
        char ch[100000];
        int b=0;
        while(a!=0)
        {
            ch[b]=a%10;
            a/=10;
            b++;
        }
        bool boo1 =false;
        for(int i=0;i<b;i++)
        {
            bool boo2 =true;
            if(ch[i]!=0)
            {
                boo1=true;
            }
            while(boo1 && boo2)
            {
                cout<<(int)ch[i];
                boo2 =false;
            }
        }
        cout<<endl;
    }
}
