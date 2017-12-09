#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin>>n;
	string str;
	vector<string> S;
	int count = 0;
	for (int i=0; i<n; i++) {
		cin>>str;
		if (count != 1) {
			for(int j=1; j<5; j++) {
				if (str[j] == 'O' && str[j-1] == 'O') {
					str[j] = '+';
					str[j-1] = '+';
					count = 1;
					break;
				}
			}
		}
		S.push_back(str);
	}
	if (count == 1) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO";
		return 0;
	}
	for (int i=0; i<S.size(); i++) {
		cout<<S[i];
		cout<<endl;
	}
	return 0;
}
