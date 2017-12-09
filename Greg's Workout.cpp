#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	int chest = 0, biceps = 0, back = 0;
	for (int i=0; i<n; i+=3)
		chest += arr[i];
	for (int i=1; i<n; i+=3)
		biceps += arr[i];
	for (int i=2; i<n; i+=3)
		back += arr[i];
	int Max = max(chest, max(biceps, back));
	if (Max == chest)
		cout<<"chest";
	else if (Max == biceps)
		cout<<"biceps";
	else
		cout<<"back";
	return 0;
}
