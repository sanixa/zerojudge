#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        long long b,c,d;
        cin>>b>>c>>d;
        switch(b)
        {
            case 1:
                cout<<c+d<<endl;
                break;
            case 2:
                cout<<c-d<<endl;
                break;
            case 3:
                cout<<c*d<<endl;
                break;
            case 4:
                cout<<c/d<<endl;
                break;
        }
    }
}
