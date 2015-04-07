#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        if(str[0]=='0' && str.size()==1)
            break;
        int count=0,control=1;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]<='Z' && str[i]>='A')
                count+=str[i]-64;
            else if(str[i]>='a' && str[i]<='z')
                count+=str[i]-96;
            else
            {
                cout<<"Fail"<<endl;
                control=0;
                break;
            }
        }
        while(control)
        {
            cout<<count<<endl;
            break;
        }
    }
}
