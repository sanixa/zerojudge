# include <iostream>
using namespace std;
int main()
{
    int y ;
    cin>>y;
    if(y%4!=0)
    {
        cout<<"a normal year"<<"\n";
    }else if(y%100!=0)
    {
        cout<<"a leap year"<<"\n";
    }else if(y%400!=0)
    {
        cout<<"a normal year"<<"\n";
    }else
    {
        cout<<"a leap year"<<"\n";
    }
    return 0;
}
