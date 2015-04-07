#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    char ch[100] ={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33} ;
    string  str;
    while(getline(cin,str))
    {
        int a,b,c;
        int d;
        d=ch[str[0]-'A'];
        b=d%10;
        a=d/10;
        c=a+b*9;
        for(int i=1;i<9;i++)
        {
            c+=(str[i]-48)*(9-i);
        }
        c+=(str[9]-48);
        if(c%10==0)
        {
            cout<<"real"<<endl;
        }
        else
        {
            cout<<"fake"<<endl;
        }
    }
    return 0;
}
