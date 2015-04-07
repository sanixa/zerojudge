#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        int cal =0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='A' &&str[i]<='Z' ||str[i]>='a' &&str[i]<='z')
            {
                if(str[i+1]<'A' || str[i+1]>'Z' &&str[i+1]<'a' ||str[i+1]>'z')
                    cal++;
            }
        }
        cout<<cal<<endl;
    }
    return 0;
}
