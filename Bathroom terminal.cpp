#include<iostream>
#include<vector>

using namespace std;

int main() {
	long n, m;
	cin>>n>>m;
	vector<string> str;
	int maxLength = 0;
	for (int i=0; i<n; i++) {
		string s;
		cin>>s;
		if (maxLength < s.length()) {
			maxLength = s.length();
		}
		str.push_back(s);
	}
	int count = 0;
	for(int i=0; i<str.size(); i++) {
		if (str[i].length() < maxLength) {
			count = maxLength - str[i].length();
		}
	}
	long res = 1;
	for (int k=0; k<m; k++) {
		int num = 0;
		string pattern;
		cin>>pattern;
		for (int i=0; i<pattern.length(); i++) {
			if (pattern[i]=='?') {
				for (int j=0; j<str.size(); j++) {
					if (str[j].length() == maxLength && str[j+1].length() == maxLength) {
						if (str[j][i] != str[j+1][i]) {
							num++;
						}
					}
				}
			}
			res *= num;
		}
	}
	cout<<res;
	return 0;
}
