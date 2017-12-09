#include<bits/stdc++.h>

using namespace std;

int main() {
	string x;
	cin>>x;
	for (unsigned long long i=0; i<x.length(); i++) {
		if (i==0) {
			if (x[i]>='5' && x[i]<='8') {
				x[i] = (('9' - '0') - (x[i] - '0') + '0');
			}
		}
		else {
			if (x[i]>='5') {
				x[i] = (('9' - '0') - (x[i] - '0') + '0');
			}
		}
		cout<<x[i];
	}
	return 0;
}
