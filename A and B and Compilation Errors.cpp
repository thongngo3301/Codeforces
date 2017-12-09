#include<iostream>

using namespace std;

int main() {
	long n;
	cin>>n;
	long arr1[n];
	long long sum1 = 0;
	for (int i=0; i<n; i++) {
		cin>>arr1[i];
		sum1 += arr1[i];
	}
	long arr2[n-1];
	long long sum2 = 0;
	for (int i=0; i<n-1; i++) {
		cin>>arr2[i];
		sum2 += arr2[i];
	}
	long arr3[n-2];
	long long sum3 = 0;
	for (int i=0; i<n-2; i++) {
		cin>>arr3[i];
		sum3 += arr3[i];
	}
	cout<<sum1 - sum2<<endl<<sum2 - sum3;
	return 0;
}
