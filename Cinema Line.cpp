#include <iostream>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <climits>
#include <stack>
#include <map>
#include <set>

using namespace std;
int n;


int pos (int n)
{
	if(n == 25)return 0;
	if(n == 50)return 1;
	return 2;
}

bool devolver(int dinero, int rublos [3])
{
	if(dinero == 25)
	{
		return true;
	}
	if(dinero == 50)
	{
		rublos[0]--;
		if(rublos[0] < 0)return false;	
		return true;
	}
	if(dinero == 100)
	{
		if(rublos[0] > 0 && rublos[1] > 0)
		{
			rublos[0]--;
			rublos[1]--;
			return true;
		}
		if(rublos[0]>=3)
		{
			rublos[0]-=3;
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}


int main()
{
	while(cin>>n)
	{
		bool p = true;
		int rublos [3] = {0,0,0};
		for(int i = 0; i < n; ++i)
		{
			int dinero;
			cin>>dinero;
			rublos[pos(dinero)]++;
			if(devolver(dinero,rublos) == false)
			{
				p = false;
			}
		//	ans += 25;
		}
		if(p)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
