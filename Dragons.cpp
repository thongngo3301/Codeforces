#include<iostream>

using namespace std;

int main() {
	int s, n, x, y;
	cin>>s>>n;
	int X[n];
	int Y[n];
	for (int i=0; i<n; i++) {
		cin>>x>>y;
		X[i] = x;
		Y[i] = y;
	}
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (X[i] > X[j]) {
				swap(X[i], X[j]);
				swap(Y[i], Y[j]);
			}
		}
	}
	for (int i=0; i<n; i++) {
		if (s > X[i]) {
			s += Y[i];
		}
		else {
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
