#include<iostream>
#include<vector>

using namespace std;

int main() {
	char c;
	cin>>c;
	string str;
	cin>>str;
	string tmp = "qwertyuiopasdfghjkl;zxcvbnm,./";
	vector<char> res;
	if (c == 'R') {
		for (int i=0; i<str.length(); i++) {
			for (int j=0; j<tmp.length(); j++) {
				if (str[i] == tmp[j]) {
					res.push_back(tmp[j-1]);
					break;
				}
			}
		}
	}
	else {
		for (int i=0; i<str.length(); i++) {
			for (int j=0; j<tmp.length(); j++) {
				if (str[i] == tmp[j]) {
					res.push_back(tmp[j+1]);
					break;
				}
			}
		}
	}
	for (int i=0; i<res.size(); i++)
		cout<<res[i];
	return 0;
}
