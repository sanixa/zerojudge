#include<iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        cout<<(a>=60)*399+(a>=18 && a<=59)*890+(a>=12 && a<=17)*790+(a<=11 && a>=6)*590<<endl;
    }
}
