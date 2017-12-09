#include<iostream>
#include<cctype>

using namespace std;

int main() {
	int n;
	cin>>n;
	string str;
	cin>>str;
	string prototype = "abcdefghijklmnopqrstuvwxyz";
	int count = 0;
	for (int i=0; i<str.length(); i++) {
		if (str[i]>='A' && str[i]<='Z') {
			str[i] = tolower(str[i]);
		}
	}
	for (int i=0; i<prototype.length(); i++) {
		for (int j=0; j<str.length(); j++) {
			if (prototype[i]==str[j]) {
				count++;
				break;
			}
		}
	}
	if (count>=26)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
