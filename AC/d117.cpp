#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    int iarr[1500]={};
    for(int k=0;k<1500;k++)
    {
        bool ba = false;
        if( k>=4 && (k%2==0 || k%3==0) )
        {
            ba= true;
            continue;
        }
        int s = sqrt(k);
        for(int i=5,j=2; i<=s ; i+=j,j=6-j)
        {
            if(k%i==0)
            {
                ba= true;
                break;
            }
        }
        if(ba==false)
        {
           iarr[k]=1;
        }
    }
    string str;
    while(getline(cin,str))
    {
        int cal=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                cal+=str[i]-96;
            }
            else
            {
                cal+=str[i]-38;
            }
        }
        /*bool ba = false;
        if( cal>=4 && (cal%2==0 || cal%3==0) )
        {
            cout<<"It is not a prime word."<<endl;
            ba= true;
            continue;
        }
        int s = sqrt(cal);
        for(int i=5,j=2; i<=s ; i+=j,j=6-j)
        {
            if(cal%i==0)
            {
                cout<<"It is not a prime word."<<endl;
                ba= true;
                break;
            }
        }
        if(ba==false)
        {
            cout<<"It is a prime word."<<endl;
        }*/
        if(iarr[cal])
        {
            cout<<"It is a prime word."<<endl;
        }
        else
        {
             cout<<"It is not a prime word."<<endl;
        }
    }
}
