#include<iostream>

using namespace std;

int r, l, x, y, k;

int main() {
	cin>>l>>r>>x>>y>>k;
	for (int i=l; i<=r; i++) {
		int c = i/k;
		if (i%k==0 && c>=x &&c<=y) {
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}

