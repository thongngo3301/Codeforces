#include<iostream>

using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	int countWBG = 0;
	char arr[n][m];
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin>>arr[i][j];
			if (arr[i][j] == 'W' || arr[i][j] == 'B' || arr[i][j] == 'G')
				countWBG++;
		}
	}
	if (countWBG == (n*m))
		cout<<"#Black&White";
	else
		cout<<"#Color";
	return 0;
}
