#include<iostream>

using namespace std;

int main() {
	int n, t;
	cin>>n>>t;
	int arr[n-1];
	for (int i=1; i<=n-1; i++) {
		cin>>arr[i];
	}
	int pos = 1;
	while (pos <= n-1) {
		pos += arr[pos];
		if (pos==t && n>=t) {
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
