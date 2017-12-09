#include<iostream>

using namespace std;

bool checkPrime (int n) {
	int i;
	if (n<=2)
		return false;
	else {
		for (i=2; i<=n/2; i++) {
			if (!(n%i)) {
				return false;
			}
		}
		return true;
	}
}

int main() {
	int n, i;
	cin>>n;
	for (i=4; i<=n; i++) {
		if (!checkPrime(i)) {
			if (!checkPrime(n-i)) {
				cout<<i<<" "<<n-i<<endl;
				return 0;
			}
		}
	}
	return 0;
}
