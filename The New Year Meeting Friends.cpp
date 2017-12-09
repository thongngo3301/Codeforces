#include<iostream>
#include<cmath>

using namespace std;

int findMin(int x, int y) {
	return x > y ? y : x;
}

int main() {
	int x, y, z;
	cin>>x>>y>>z;
	int minX = fabs(y-x) + fabs(z-x);
	int minY = fabs(x-y) + fabs(z-y);
	int minZ = fabs(x-z) + fabs(y-z);
	cout << findMin(minX, (findMin(minY, minZ)));
	return 0;
}
