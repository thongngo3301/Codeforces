#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	long v;
	cin>>n>>v;
	int count = 0;
	vector<int> result;
	for (int i=0; i<n; i++) {
		int k;
		cin>>k;
		vector<int> list;
		for (int j=0; j<k; j++) {
			long price;
			cin>>price;
			list.push_back(price);
		}
		for (int j=0; j<k; j++) {
			if (v > list[j]) {
				count++;
				result.push_back(i+1);
				break;
			}
		}
	}
	cout<<count<<endl;
	for (int i=0; i<result.size(); i++) {
		cout<<result[i]<<" ";
	}
	return 0;
}
