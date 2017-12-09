#include<bits/stdc++.h>

using namespace std;

int main() {
	vector<int> store;
	int a;
	for (int i=0; i<4; i++) {
		cin>>a;
		store.push_back(a);
	}
	string s;
	cin>>s;
	int sum = 0;
	for (int i=0; i<s.length(); i++) {
		if (s[i]=='1') {
			sum += store[0];
		}
		else if (s[i]=='2') {
			sum += store[1];
		}
		else if (s[i]=='3') {
			sum += store[2];
		}
		else {
			sum += store[3];
		}
	}
	cout<<sum;
	return 0;
}
