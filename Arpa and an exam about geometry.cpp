#include<iostream>
#include<cmath>

using namespace std;

int main() {
	long long ax, ay, bx, by, cx, cy;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	float ab = sqrt(pow(fabs(bx-ax),2) + pow(fabs(by-ay),2));
	float bc = sqrt(pow(fabs(cx-bx),2) + pow(fabs(cy-by),2));
	if (ab == bc) {
		if (((by-ay)*(cx-ax) - (bx-ax)*(cy-ay)) == 0) {
			cout<<"No";
		}
		else {
			cout<<"Yes";
		}
	}
	else
		cout<<"No";
	return 0;
}
