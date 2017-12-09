#include<iostream>

using namespace std;

int main() {
	long n;
	cin>>n;
	string s;
	cin>>s;
	long sum = s[0] - 48;
	while (sum / 10 != 0) {
		int i=0;
		cout<<s[i];
		for(int i=1; i<s.length(); i++) {
			cout<<"+"<<s[i];
		}
	}
	return 0;
}
