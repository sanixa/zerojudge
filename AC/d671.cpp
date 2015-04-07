#include<iostream>
#include<cstring>
int perfect[100];
using namespace std;
int main()
{
    int a,row;
    cin>>a;
    cin.get();
    string str1,str2;
    for(int i=0;i<100;i++)
        perfect[i]=(i+1)*(i+1);
    while(a--)
    {
        getline(cin,str1);
        row=0;
        for(int i=0;i<100;i++)
        {
            if(perfect[i]==str1.size())
            {
                row=i+1;
                break;
            }
            if(i==99)
                cout<<"INVALID"<<endl;
        }
        if(row!=0)
        {
            str2.resize(10000);
            int k=0;
            for(int i=0;i<row;i++)
            {
                for(int j=i;j<str1.size();j+=row)
                {
                    str2[k]=str1[j];
                    k++;
                }
            }
            for(int i=0;i<str1.size();i++)
                cout<<str2[i];
            cout<<endl;
        }
    }
}
