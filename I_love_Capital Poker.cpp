#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++)
		cin>>arr[i];
	if (n==1) {
		cout<<"0";
		return 0;
	}
	int countMore = 0, countLess = 0;
	int max, min;
	if (arr[1] > arr[0]) {
		max = arr[1];
		min = arr[0];
		countMore += 1;
	}
	else {
		max = arr[0];
		min = arr[1];
		countLess += 1;
	}
	for (int i=2; i<n; i++) {
		if (arr[i] > max) {
			countMore++;
			max = arr[i];
		}
		if (arr[i] < min) {
			countLess++;
			min = arr[i];
		}
	}
	if (arr[0] == arr[1])
		cout << countMore + countLess - 1;
	else
		cout << countMore + countLess;
	return 0;
}
