#include<iostream>
#include<cstring>
using namespace std;
void fa(string str,string sa,int ia)
{
    if(sa[ia]=='1')
        return;
    sa[ia]='1';
    str+=(char)(ia+'1');
    if(str.size()==sa.size())
    {
        cout<<str<<endl;
        return;
    }
    for(int i=sa.size()-1;i>=0;i--)
    {
        fa(str,sa,i);
    }
}
int main()
{
    int a;
    while(cin>>a)
    {
        string sa,str="";
        sa.assign(a,'0');
        for(int i=a-1;i>=0;i--)
        {
            fa(str,sa,i);
        }
    }
}
