#include<iostream>

using namespace std;

int main() {
	int n, t;
	cin>>n>>t;
	if (n==1 && t==10) {
		cout<<"-1";
	}
	else {
		if (!(n%2) && t==10) {
			for (int i=1; i<=n/2; i++) {
				cout<<t;
			}
		}
		else if (n%2 && t==10) {
			for (int i=1; i<=n/2; i++) {
				cout<<t;
			}
			cout<<"0";
		}
		else if (t<10) {
			for (int i=1; i<=n; i++) {
				cout<<t;
			}
		}
	}
	return 0;
}
