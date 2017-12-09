#include<iostream>
#include<cmath>

using namespace std;

int main() {
	long n;
	cin>>n;
	long long x;
	cin>>x;
	long count = 0;
	int same = 0;
	if (x==1) {
		cout << "1";
		return 0;
	}
	else if (x == n*n) {
		cout << "1";
		return 0;
	}
	else {
		for (long i=1; i<=sqrt(x); i++) {
			if (x % i == 0) {
				if (x / i <= n) {
					count++;
					if (x / i == i) {
						same++;
					}
				}
			}
		}
	}
	if (same)
		cout<<count*2-1;
	else
		cout<<count*2;
	return 0;
}
