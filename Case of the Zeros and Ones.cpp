#include<iostream>

using namespace std;

int main () {
	int n;
	cin>>n;
	string str;
	cin>>str;
	int countZero = 0, countOne = 0;
	for (int i=0; i<str.length(); i++) {
		if (str[i]=='1')
			countOne++;
		else
			countZero++;
	}
	cout << str.length() - 2 * (countZero < countOne ? countZero : countOne);
	return 0;
}
