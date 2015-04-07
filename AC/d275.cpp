#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a;
    string str;
    while(cin>>a)
    {
        cin.get();
        for(int i=0;i<a;i++)
        {
            int fnum=0,mnum=0;
            getline(cin,str);
            for(int j=0;j<str.size();j++)
            {
                if(str[j]=='F')
                    fnum++;
                else if(str[j]=='M')
                    mnum++;
            }
            if(fnum==mnum && fnum>1 && mnum>1)
                cout<<"LOOP"<<endl;
            else
                cout<<"NO LOOP"<<endl;
        }
    }
}
