#include<iostream>

using namespace std;

int main() {
	long long n, m;
	cin>>n>>m;
	long arr[m];
	for (int i=0; i<m; i++) {
		cin>>arr[i];
	}
	long long time=0, i;
	time = arr[0] - 1;
	for (i=1; i<m; i++) {
		if (arr[i] < arr[i-1]) {
			time += n - arr[i-1] + arr[i];
			arr[i-1] = arr[i];
		}
		else {
			time += arr[i] - arr[i-1];
			arr[i-1] = arr[i];
		}
	}
	cout<<time;
	return 0;
}
