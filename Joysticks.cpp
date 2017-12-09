#include<bits/stdc++.h>
using namespace std;
int min (int a,int b)
{
	return a>b?1:0;
}
int main()
{
	int minute,m,n;
	while(cin>>m>>n)
	{
		minute=0;
		while(m&&n)
		{
			if(m==1&&n==1)
				break;
			if(min(m,n))
				{
					n++;
					m-=2;
					minute++;
				}
			else {
				m++;
				n-=2; 
				minute++;
			}
		}
		cout<<minute<<endl;
	}
	return 0;
}
