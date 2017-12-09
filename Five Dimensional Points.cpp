#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n][5];
	for (int i=0; i<n; i++) {
		for (int j=0; j<5; j++) {
			cin>>arr[i][j];
		}
	}
	int count = 0;
	vector<int> res;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			for (int k=0; k<n; k++) {
				int sum = 0;
				for (int m=0; m<5; m++) {
					sum += arr[j][m]*arr[k][m] - arr[i][m]*(arr[j][m] + arr[k][m]) + pow(arr[i][m],2);
				}
				if (sum < 0) {
					count++;
					res.push_back(i+1);
				}
			}
		}
	}
	cout<<res.size();
	cout<<n-count<<endl;
	for(int i=0; i<res[res.size()]; i++) {
		bool check = true;
		for (int j=0; j<res.size(); j++) {
			if (res[j]==i+1) {
				check = false;
				break;
			}
		}
		if (check) {
			cout<<i+1<<" ";
		}
	}
	return 0;
}
