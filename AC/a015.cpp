#include <iostream>
using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        int iarr[100][100];
        for(int j=0;j<x;j++)
        {
            for(int i=0;i<y;i++)
            {
                cin>>iarr[j][i];
            }
        }
        for(int j=0;j<y;j++)
        {
            for(int i=0;i<x;i++)
            {
                cout<<iarr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

