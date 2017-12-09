#include<iostream>

using namespace std;

int main() {
	long n;
	long long c;
	cin>>n>>c;
	long long arr[n];
	for (long i=0; i<n; i++) {
		cin>>arr[i];
	}
	long count = 1;
	for (long i=1; i<n; i++) {
		if (arr[i] - arr[i-1] <= c) {
			count++;
		}
		else {
			count = 1;
		}
	}
	cout<<count;
	return 0;
}
