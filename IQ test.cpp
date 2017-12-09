#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	int count=0;
	for (int i=1; i<=n; i++) {
		cin>>arr[i];
	}
	int countSame = 0;
	for (int i=1; i<=3; i++) {
		if (arr[i]%2)
			countSame++;
	}
	if (countSame>=2) {
		for (int i=1; i<=n; i++) {
			if (!(arr[i]%2)) {
				cout<<i;
				return 0;
			}
		}
	}
	else {
		for (int i=1; i<=n; i++) {
			if (arr[i]%2) {
				cout<<i;
				return 0;
			}
		}
	}
	return 0;
}
