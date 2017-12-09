#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {
	long long l, r, x, y, k;
	cin>>l>>r>>x>>y>>k;
	for (long long i=l; i<=r; i++) {
		double tmp = (double)i/k;
		if (tmp - floor(tmp) == 0) {
			if (tmp>=x && tmp<=y) {
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}
