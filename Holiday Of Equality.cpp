#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	long arr[n];
	long max = 0;
	for (int i=0; i<n; i++) {
		cin>>arr[i];
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	long sum = 0;
	for (int i=0; i<n; i++) {
		sum += max - arr[i];
	}
	cout<<sum;
	return 0;
}
