#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    string str;
    while(getline(cin,str) , str!="0")
    {
        int a[2]={};
        for(int i=0;i<str.size();i++)
            a[i%2]+=str[i]-'0';
        if((a[0]-a[1])%11==0)
            cout<<str<<" is a multiple of 11."<<endl;
        else
            cout<<str<<" is not a multiple of 11."<<endl;
    }
}
