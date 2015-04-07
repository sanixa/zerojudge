
# include <iostream>
using namespace std;
int main()
{
    int y ;
    while(cin>>y)
    {
        if(cin.eof()) break; //在while迴圈就跳出,不須判斷

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
    }
    return 0;
}
