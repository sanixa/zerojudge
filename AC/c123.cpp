#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a,a)
    {
        int stack1[1000],arr[1000];
        while(cin>>arr[0],arr[0])
        {
            int top=0;
            for(int i=1;i<a;i++)
                cin>>arr[i];
            int b=1;
            for(int i=0;i<a;i++)
            {
                while(arr[i]>b)
                {
                    stack1[top]=b;
                    top++;
                    b++;
                }
                if(arr[i]==b)
                    b++;
                else
                {
                    if(arr[i]!=stack1[top-1])
                    {
                        cout<<"No"<<endl;
                        break;
                    }
                    top--;
                }
            }
            if(!top)
            {
                cout<<"Yes"<<endl;
            }
        }
    }
}
