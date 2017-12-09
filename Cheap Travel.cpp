#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int n, m, a, b;
	cin>>n>>m>>a>>b;
	int cost=0;
	if (a*m > b) {
		cost += b*(n/m);
	}
	else {
		cost += n*a;
	}
	if (n%m) {
		if (a*(n%m) > b) {
			cost += b;
		}
		else {
			cost += a*(n%m);
		}
	}
	cout << cost;
	return 0;
}
