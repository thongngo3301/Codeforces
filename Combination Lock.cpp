#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int n;
	cin>>n;
	char state[n];
	char open[n];
	for (int i=0; i<n; i++)
		cin>>state[i];
	for (int i=0; i<n; i++)
		cin>>open[i];
	int moves = 0, tmp = 0;
	for (int i=0; i<n; i++) {
		tmp = fabs(state[i] - open[i]);
		if (tmp <= 5) {
			moves += tmp;
		}
		else {
			moves += 10 - tmp;
		}
	}
	cout<<moves;
	return 0;
}
