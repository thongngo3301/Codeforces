#include<iostream>
#include<cctype>

using namespace std;

int main() {
	string s;
	cin>>s;
	int countUpper=0, countLower=0;
	for (int i=0; i<s.length(); i++) {
		if (s[i]>='A'&&s[i]<='Z')
			countUpper++;
		else
			countLower++;
	}
	if (countUpper > countLower) {
		for (int i=0; i<s.length(); i++) {
			if (s[i]>='a' && s[i]<='z') {
				s[i] = toupper(s[i]);
			}
		}
		cout<<s;
	}
	else {
		for (int i=0; i<s.length(); i++) {
			if (s[i]>='A' && s[i]<='Z') {
				s[i] = tolower(s[i]);
			}
		}
		cout<<s;
	}
	return 0;
}
