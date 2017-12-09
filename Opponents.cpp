#include<iostream>

using namespace std;

int main() {
	int n, d;
	cin>>n>>d;
	int days = 0;
	int temp = 0;
	for (int i=0; i<d; i++) {
		string s;
		cin>>s;
		int check1 = 0;
		for (int j=0; j<s.length(); j++) {
			if (s[j] == '1')
				check1++;
		}
		if (check1 != s.length()) {
			temp++;
			if (temp >= days)
				days = temp;
		}
		else {
			temp = 0;
		}
	}
	cout<<days;
	return 0;
}
