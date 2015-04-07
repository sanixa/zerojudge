#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b,c;
    for(int i=0;i<a;i++)
    {
        cin>>b>>c;
        if(b%2 == 0) b+=1;
        if(c%2 == 0) c-=1;
        int total=0;
        total=(b+c)*((c-b)/2+1)/2;
        cout<<"Case "<<i+1<<": "<<total<<endl;
    }
    return 0;
}
