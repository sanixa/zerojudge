#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a;
    cin>>a;
    char ch[1000];
    while(cin>>ch)
    {
        bool b1=true;
        for(int i=0;i<strlen(ch);i++)
        {
            if(ch[i]!=ch[strlen(ch)-i-1])
            {
                cout<<"no"<<endl;
                b1=false;
                break;
            }
        }
        if(b1)
        {
            cout<<"yes"<<endl;
        }

    }
}

