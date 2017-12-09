#include<bits/stdc++.h>

using namespace std;

int main() {
	int a[4];
	int tmp = 0;
	for (int i=1; i<=4; i++) {
		cin>>a[i];
	}
	if ((a[3] - a[1] != 0) && (a[4] - a[2] != 0) && (fabs(a[3] - a[1]) != fabs(a[4] - a[2]))) {
		cout<<"-1";
		return 0;
	}
	else {
		if (fabs(a[3] - a[1]) == fabs(a[4] - a[2])) {
			cout<<a[1]<<" "<<a[4]<<" "<<a[3]<<" "<<a[2];
		}
		else if ((a[3] - a[1]) == 0 && (a[4] - a[2]) != 0) {
			tmp = a[4] - a[2];
			if (tmp > 0) {
				cout<<a[1] + tmp<<" "<<a[2]<<" "<<a[3] + tmp<<" "<<a[4];
			}
			else {
				cout<<a[1] - tmp<<" "<<a[2]<<" "<<a[3] - tmp<<" "<<a[4];
			}
		}
		else if ((a[3] - a[1]) != 0 && (a[4] - a[2]) == 0) {
			tmp = a[3] - a[1];
			if (tmp > 0) {
				cout<<a[1]<<" "<<a[2] + tmp<<" "<<a[3]<<" "<<a[4] + tmp;
			}
			else {
				cout<<a[1]<<" "<<a[2] - tmp<<" "<<a[3]<<" "<<a[4] - tmp;
			}
		}
	}
	return 0;
}
