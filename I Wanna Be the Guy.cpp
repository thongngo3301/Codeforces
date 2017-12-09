#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> Arr;
	int x;
	cin>>x;
	int arrX[x];
	for (int i=0; i<x; i++) {
		cin>>arrX[i];
		Arr.push_back(arrX[i]);
	}
	int y;
	cin>>y;
	int arrY[y];
	for (int i=0; i<y; i++) {
		cin>>arrY[i];
		Arr.push_back(arrY[i]);
	}
	int count=0, i;
	sort(Arr.begin(), Arr.end());
	for (i=1; i<Arr.size(); i++) {
		if (Arr[i] == Arr[i-1]) {
			Arr.erase(Arr.begin()+i);
		}
	}
	for (int i=0; i<Arr.size(); i++) {
		for (int j=1; j<=n; j++) {
			if (Arr[i] == j) {
				count++;
				break;
			}
		}
	}
	if (count == n)
		cout<<"I become the guy.";
	else
		cout<<"Oh, my keyboard!";
	return 0;
}
