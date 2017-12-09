#include<bits/stdc++.h>

using namespace std;

int main() {
	long long k2, k3, k5, k6;
	cin>>k2>>k3>>k5>>k6;
	long long Min = min (k2, min (k5, k6));
	k2 -= Min;
	cout<<256 * Min + 32 * min(k2, k3);
	return 0;
}
