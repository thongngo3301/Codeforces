#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, x;
	cin>>n>>x;
	int arr[n];
	int sum = 0;
	for (int i=0; i<n; i++) {
		cin>>arr[i];
		sum += arr[i];
	}
	sum = sum < 0 ? (-sum) : sum;
    if (sum % x == 0)
		sum /= x;
    else
		sum = sum / x + 1;
	cout<<sum;
	return 0;
}
