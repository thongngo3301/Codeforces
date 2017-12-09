#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for (int i=1; i<=n; i++) {
		cin>>arr[i];
	}
	if (n < 2) {
		if (arr[n]==0) {
			cout<<"UP";
		}
		else if (arr[n]==15) {
			cout<<"DOWN";
		}
		else
			cout<<-1;
	}
	else if (arr[n]==0)
		cout<<"UP";
	else if (arr[n]==15)
		cout<<"DOWN";
	else if (arr[n] > arr[n-1])
		cout<<"UP";
	else
		cout<<"DOWN";
	return 0;
}
