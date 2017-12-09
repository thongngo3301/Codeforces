#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	int move = min(n, m);
	if (!(move%2))
		cout<<"Malvika";
	else
		cout<<"Akshat";
	return 0;
}
