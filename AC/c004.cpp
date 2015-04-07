#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    while(cin>>b>>c)
    {
        if(b<c)  cout<<"impossible"<<endl;
        else if((b+c)%2 != 0) cout<<"impossible"<<endl;
        else   cout<<(b+c)/2<<" "<<(b-c)/2<<endl;
    }
    return 0;
}
