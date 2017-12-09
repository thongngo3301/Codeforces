#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	string str;
	int countA = 0, countD = 0;
	cin>>str;
	for (int i=0; i<n; i++) {
		if (str[i]=='A')
			countA++;
		if (str[i]=='D')
			countD++;
	}
	if (countA == countD) {
		cout<<"Friendship";
		return 0;
	}
	else {
		if (countA > countD) {
			cout<<"Anton";
			return 0;
		}
		else {
			cout<<"Danik";
			return 0;
		}
	}
	return 0;
}
