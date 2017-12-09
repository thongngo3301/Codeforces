#include<bits/stdc++.h>

using namespace std;

int main() {
	int a, b;
	cin>>a>>b;
	int year = 0;
	do {
		a *= 3;
		b *= 2;
		year++;
	} while (a <= b);
	cout<<year;
	return 0;
}
