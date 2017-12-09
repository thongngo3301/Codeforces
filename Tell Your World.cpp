#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> arr;
	for (int i=0; i<n; i++) {
		long long a;
		cin>>a;
		arr.push_back(a - i + 1);
	}
	sort(arr.begin(), arr.end());
	int count = 1;
	for(int i=1; i<arr.size(); i++) {
		if (arr[i] - 1 == arr[i-1]) {
			count++;
		}
	}
	if (count >= n - 2)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}
