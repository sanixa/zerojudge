#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a;
    cin>>a;
    while(a--)
    {
        string str;
        cin>>str;
        if(str.length()==5)
        {
            cout<<"3"<<endl;
        }
        else if(str[0]=='o' && str[1]=='n' || str[0]=='o' && str[2]=='e' || str[1]=='n' && str[2]=='e')
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
}

