#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<long long> myvector;
    vector<long long>::iterator it;
    long long a;
    while(cin>>a)
    {
        if(myvector.size()==0)
        {
            myvector.push_back( a );
        }
        else
        {
            for(it= myvector.begin(); it<myvector.end() ;it++)
            {
                //cout<<*it<<" ";
                if(a<=*it)
                {
                    myvector.insert ( it , a );
                    break;
                }
                if(it==myvector.end()-1)
                {
                    myvector.push_back( a );
                    break;
                }
                //cout<<"size="<<myvector.size()<<", back="<<*(myvector.end()-1)<<endl;
            }
        }
        int b=myvector.size()/2;
        if(myvector.size() %2!=0)
            cout<<myvector.at(b)<<endl;
        else
            cout<<(myvector.at(b-1)+myvector.at(b))/2<<endl;
    }
}
