#include<iostream>
#include<cstring>
using namespace std;
int iarr[1000000];

int main()
{
    string str;
    while(getline(cin,str))
    {
        long long con=0;
        for(int i=0;i<str.length();i++)
        {
            con+=str[i];
        }
        if(con%3==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
