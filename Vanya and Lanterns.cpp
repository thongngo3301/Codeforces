#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main() {
	long n, l;
	cin>>n>>l;
	long arr[n];
	int countFirst = 0;
	for (int i = 0; i < n; i++) {
		cin>>arr[i];
		if (arr[i]==0) {
			countFirst = 1;
		}
	}
	sort (arr, arr+n);
	double min = 0;
	if (n==1 && arr[n-1]==0 && l!=0) {
		cout<<fixed<<setprecision(10)<<(double)l;
		return 0;
	}
	else {
		if (countFirst == 1) {
			for (int i=1; i<n; i++) {
				if ((arr[i] - arr[i-1]) > min) {
					min = arr[i] - arr[i-1];
				}
			}
			cout<<fixed<<setprecision(10)<<min/2;
			return 0;
		}
		else {
			if ( (l - arr[n-1]) > arr[0] )
				min = l - arr[n-1];
			else
				min = arr[0];
			for (int i=1; i<n; i++) {
				if ((arr[i] - arr[i-1]) > (min*2)) {
					min = ((double)(arr[i] - arr[i-1]))/2;
				}
			}
			cout<<fixed<<setprecision(10)<<min;
			return 0;
		}
	}
	return 0;
}
