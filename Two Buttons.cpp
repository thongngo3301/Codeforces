#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	if (n > m) {
		cout<<n - m;
	}
	else {
		int count = 0;
		while (m > n) {
			if (m % 2 == 0) {
				m /= 2;
			}
			else {
				m++;
			}
			count++;
		}
		cout << abs(count + n - m);
	}
	return 0;
}
