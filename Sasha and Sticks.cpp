#include<iostream>

using namespace std;

int main() {
	unsigned long long n, k;
	cin>>n>>k;
	if (!((n/k)%2))
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}
