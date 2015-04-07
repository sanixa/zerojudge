#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        int arr1[10];
        for(int i=0;i<9;i++)
        {
            arr1[i]=a%10;
            a/=10;
        }
        int cal=0;
        for(int i=0;i<8;i++)
        {
            cal+=arr1[8-i]*(8-i);
        }
        int arr2[26]={1,10,19,28,37,46,55,64,39,73,82,2,11,20,48,29,38,47,56,65,74,83,21,3,12,30};
        for(int i=0;i<26;i++)
        {
            if((arr2[i]+cal+arr1[0])%10==0)
            {
                char c=i+65;
                cout<<c;
            }
        }
        cout<<endl;
    }
}
