#include<iostream>

using namespace std;

int main() {
	int n, k;
	cin>>n>>k;
	int time = k, solved = 0;
	for (int i=1; i<=n; i++) {
		time += 5*i;
		if (time <= 240) {
			solved++;
		}
		else {
			break;;
		}
	}
	cout<<solved;
	return 0;
}
