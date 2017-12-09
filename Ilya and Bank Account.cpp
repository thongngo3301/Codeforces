#include<iostream>
#include<vector>

using namespace std;

int main() {
	long n;
	cin>>n;
	if (n >= 0) {
		cout<<n;
		return 0;
	}
	else {
		vector<long> str;
		long tmp = n*-1;
		while (tmp) {
			str.push_back(tmp%10);
			tmp /= 10;
		}
		long countZero = 0;
		for (int i=0; i<str.size(); i++) {
			if (str[i]==0)
				countZero++;
		}
		if (str.size()==2 && countZero==1) {
			cout<<"0";
			return 0;
		}
		else {
			if (str[0] >= str[1]) {
				cout << "-";
				for (int i=str.size()-1; i>=1; i--) {
					cout<<str[i];
				}
			}
			else {
				cout << "-";
				for (int i=str.size()-1; i>=2; i--) {
					cout << str[i];
				}
				cout<<str[0];
			}
		}
	}
	return 0;
}
