#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	int total = 0;
	for (int i=0; i<n; i++) {
		cin>>arr[i];
		if (arr[i] < 0)
			total++;
	}
	int pos;
	for (int i=0; i<n; i++) {
		if (arr[i] > 0) {
			pos = i;
			break;
		}
	}
	int untreated = 0;
	int police = 0;
	for (int i=pos; i<n; i++) {
		if (arr[i] > 0) {
			police += arr[i];
		}
		else {
			if (police > 0) {
				police--;
				total--;
			}
		}
	}
	cout<<total;
	return 0;
}
