#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char ch[1000000];
    while( gets(ch)!=NULL )
    {
        for(int i =0;i<strlen(ch);i++)
        {
            ch[i]-=7;
        }
        printf("%s\n",ch);
    }
}

/*
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        for(int i =0;i<=str.size();i++)
        {
            str[i]-=7;
        }
        cout<<str<<endl;
    }
}
*/
