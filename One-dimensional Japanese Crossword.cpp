#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	string str;
	cin>>str;
	vector<int> res;
	int blocks = 0;
	for (int i=0; i<str.length(); i++) {
		if(str[i]=='B') {
			int count = 1;
			blocks++;
			while (str[i+count]=='B') {
				count++;
			}
			res.push_back(count);
			i += count;
		}
	}
	cout<<blocks<<endl;
	for (int i=0; i<res.size(); i++) {
		cout<<res[i]<<" ";
	}
	return 0;
}
