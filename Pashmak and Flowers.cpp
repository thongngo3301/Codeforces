#include<bits/stdc++.h>

using namespace std;

int main() {
	long long n;
	cin>>n;
	long long arr[n];
	for (long long i=0; i<n; i++) {
		cin>>arr[i];
	}
	long long max = 0, min = 0;
	sort(arr, arr+n);
	for (long long i=0; i<n; i++) {
		if (arr[i] == arr[0]) {
			min++;
		}
		if (arr[i] == arr[n-1]) {
			max++;
		}
	}
	if (arr[0] == arr[n-1])
		cout<<arr[n-1] - arr[0]<<" "<<min * (max -1) / 2;
	else
		cout<<arr[n-1] - arr[0]<<" "<<min * max;
	return 0;
}
