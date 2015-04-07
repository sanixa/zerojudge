#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        int cal =2;
        for(int i =0;i<a;i++)
        {
            cal += i*2;
        }
        cout<<cal<<endl;
    }
}
