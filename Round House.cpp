#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, a, b;
	cin>>n>>a>>b;
	cout<<(abs((b%n)+a+n)%n>0?abs((b%n)+a+n)%n:n);
	return 0;
}
