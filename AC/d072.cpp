# include <iostream>
using namespace std;
int main()
{
    int x,y ;
    cin>>x;
    int z=1;
    while(cin>>y)
    {
        if(y%4!=0)
        {
            cout<<"Case "<<z<<": a normal year"<<"\n";
        }else if(y%100!=0)
        {
            cout<<"Case "<<z<<": a leap year"<<"\n";
        }else if(y%400!=0)
        {
            cout<<"Case "<<z<<": a normal year"<<"\n";
        }else
        {
            cout<<"Case "<<z<<": a leap year"<<"\n";
        }
        z++;
    }
    return 0;
}
