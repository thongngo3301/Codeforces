#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++)
		cin>>arr[i];
	for (int i=0; i<n; i++) {
		int pos = 1;
		for (int j=0; j<n; j++) {
			if (arr[i] < arr[j]) {
				pos++;
			}
		}
		cout<<pos<<" ";
	}
	return 0;
}
