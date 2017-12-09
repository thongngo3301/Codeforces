#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int l, a, p;
	cin>>l>>a>>p;
	int MIN = min((l / 1), min((a / 2), (p / 4)));
	cout<<MIN*7;
	return 0;
}
