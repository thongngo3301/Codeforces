#include<bits/stdc++.h>

using namespace std;

int main() {
	long long a, b;
	unsigned long long s;
	cin>>a>>b>>s;
	a=fabs(a);
	b=fabs(b);
	s=abs(s);
	if((a+b==s) || ((a+b)%2==0 && s%2==0 && s>=a+b) || ((a+b)%2!=0 && s%2!=0 && s>=a+b))
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}
