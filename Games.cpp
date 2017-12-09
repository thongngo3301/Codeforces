#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int max = n*2;
	int arr[max];
	for (int i=0; i<max; i++) {
		cin>>arr[i];
	}
	int count=0;
	for (int i=0; i<max; i+=2) {
		for (int j=1; j<max; j+=2) {
			if (arr[i]==arr[j]) {
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
