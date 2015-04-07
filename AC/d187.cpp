#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        cin.get();
        for(int i=0;i<a;i++)
        {
            string str;
            getline(cin,str);
            int count =0;
            for(int j=0;j<str.size();j++)
            {
                if(str[j]==' ')
                    count++;
                else if(str[j]<='o')
                    count+=(str[j]-'a')%3+1;
                else if(str[j]<='s' && str[j]>='p')
                    count+=(str[j]-'p')%4+1;
                else if(str[j]<='v' && str[j]>='t')
                    count+=(str[j]-'t')%3+1;
                else if(str[j]<='z' && str[j]>='w')
                    count+=(str[j]-'w')%4+1;
            }
            cout<<"Case #"<<i+1<<": "<<count<<endl;
        }
    }
}
