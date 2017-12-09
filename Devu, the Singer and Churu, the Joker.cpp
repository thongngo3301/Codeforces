#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, d;
	cin>>n>>d;
	int a[n];
	int count = (n-1)*2, sum = (n-1)*10;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		sum += a[i];
	}
	if (sum > d) {
		cout<<"-1";
	}
	else {
		count += (d - sum) / 5;
		cout<<count; 
	}
	return 0;
}
