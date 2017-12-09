#include<iostream>

using namespace std;

int main() {
	int n, k;
	cin>>n>>k;
	int arr[n];
	int count = 0, sum = 0;
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	int lim = 5 - k;
	for (int i=0; i<n; i++) {
		if (arr[i] <= lim) {
			count++;
			if (count == 3) {
				sum++;
				count = 0;
			}
		}
	}
	cout<<sum;
	return 0;
}
