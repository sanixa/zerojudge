#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float h,u,d,f;
	float height,climb,day;
	while(cin>>h>>u>>d>>f,h!=0)
	{
		height=0;
		climb=u;
		for(int i=0;;i++)
		{
		    day=i+1;
		    if(climb>0)
                height+=climb;
			if(height<=h)
			{
				height-=d;
				climb-=u*f/100.0;
			}
			if(height<0)
                break;
            if(height>h)
                break;
		}
		if(height<0)
			cout<<"failure on day "<<day<<endl;
		else
			cout<<"success on day "<<day<<endl;
	}
}

