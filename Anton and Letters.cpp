#include<iostream>

using namespace std;

int main() {
	string str;
	getline(cin, str);
	for (int i=0; i<str.length(); i++) {
		for (int j=i+1; j<str.length(); j++) {
			if (str[i]==str[j] && (str[i]>='a' && str[i]<='z')) {
				str.erase(j,1);
			}
		}
	}
	int count=0;
	for (int i=0; i<str.length(); i++)
		if (str[i]>='a' && str[i]<='z')
			count++;
	cout<<count;
	return 0;
}
