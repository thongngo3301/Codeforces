#include<bits/stdc++.h>

using namespace std;

long long min(long long a, long long b) {
	return a > b ? b : a;
}

long long max(long long a, long long b) {
	return a < b ? b : a;
}

int main() {
	long n;
	cin>>n;
	long long arr[n];
	for (long i=1; i<=n; i++) {
		cin>>arr[i];
	}
	for (long i=1; i<=n; i++) {
		if (i==1) {
			cout<<arr[2] - arr[1]<<" "<<arr[n] - arr[1]<<endl;
		}
		else if (i==n) {
			cout<<arr[n] - arr[n-1]<<" "<<arr[n] - arr[1]<<endl;
		}
		else {
			cout<<min((arr[i+1] - arr[i]), (arr[i] - arr[i-1]))<<" "<<max((arr[i] - arr[1]), (arr[n] - arr[i]))<<endl;
		}
	}
	return 0;
}
