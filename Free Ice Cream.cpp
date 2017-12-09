#include<bits/stdc++.h>

using namespace std;

int main() {
	long long n, x;
	cin>>n>>x;
	int count = 0;
	for (int i=0; i<n; i++) {
		char c;
		int a;
		cin>>c>>a;
		if (c == '+') {
			x += a;
		}
		else {
			if (x >= a) {
				x -= a;
			}
			else {
				count++;
			}
		}
	}
	cout<<x<<" "<<count;
	return 0;
}
