#include<bits/stdc++.h>

using namespace std;

int main() {
	string str;
	cin>>str;
	int first = 0, last = 0;
	for (int i=0; i<str.length(); i++) {
		if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y') {
			first = i+1;
			break;
		}
	}
	for (int i=str.length()-1; i>=0; i--) {
		if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y') {
			last = str.length() - i;
			break;
		}
	}
	int Max = first >= last ? first : last;
	for (int i=first-1; i<str.length(); i++) {
		if (str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y') {
			for (int j=i+1; j<str.length(); j++) {
				if (str[j]=='A' || str[j]=='E' || str[j]=='I' || str[j]=='O' || str[j]=='U' || str[j]=='Y') {
					if (j - i >= Max) {
						Max = j - i;
					}
					i = j - 1;
					break;
				}
			}
		}
	}
	if (Max != 0)
		cout<<Max;
	else
		cout<<str.length()+1;
	return 0;
}
