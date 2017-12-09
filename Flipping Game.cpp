#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int a;
	int count1 = 0, count0 = 0, count0max = -1;
	for (int i=0; i<n; i++) {
		cin >> a;
		if (a == 1) {
			count1++;
			if (count0 > 0)
				count0--;
		}
		else {
			count0++;
			if (count0 > count0max) {
				count0max = count0;
			}
		}
	}
	cout<<count1 + count0max;
	return 0;
}
