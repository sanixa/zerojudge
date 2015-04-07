#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./",str2;
    while(getline(cin,str2))
    {
        for(int i=0;i<str2.size();i++)
        {
            for(int j=0;j<str1.size();j++)
            {
                if(str2[i]==' ')
                {
                    cout<<" ";
                    break;
                }

                if(str2[i]==str1[j])
                {
                    cout<<str1[j-1];
                    break;
                }
            }
        }
        cout<<endl;
    }
}
