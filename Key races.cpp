#include<iostream>

using namespace std;

int main() {
	int s, v1, v2, t1, t2;
	int sum1 = 0, sum2 = 0;
	cin>>s>>v1>>v2>>t1>>t2;
	sum1 = s*v1 + t1*2;
	sum2 = s*v2 + t2*2;
	if (sum1 == sum2)
		cout<<"Friendship";
	else {
		if (sum1 < sum2)
			cout<<"First";
		else
			cout<<"Second";
	}
	return 0;
}
