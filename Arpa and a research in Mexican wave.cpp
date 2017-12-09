#include<iostream>

using namespace std;

int main() {
	unsigned long long n, k, t;
	cin>>n>>k>>t;
	if (t <= k) {
		cout<<t;
	}
	else if (t > k && t <= n) {
		cout<<k;
	}
	else {
		if (t%(k+n)==0)
			cout<<0;
		else
			cout<<k - t%k;
	}
	return 0;
}
