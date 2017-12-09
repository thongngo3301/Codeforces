#include<bits/stdc++.h>

using namespace std;

int main() {
	long n;
	cin>>n;
	long cash = 1, maxCash = 1;
	int h, m;
	int lh, lm;
	cin>>lh>>lm;
	for (int i=1; i<n; i++) {
		cin>>h>>m;
		if (h==lh && m==lm) {
			cash++;
			if (maxCash < cash) {
				maxCash = cash;
			}
		}
		else {
			cash = 1;
		}
		lh = h;
		lm = m;
	}
	cout<<maxCash;
	return 0;
}
