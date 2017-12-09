#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int r, d;
	cin>>r>>d;
	long n;
	cin>>n;
	int crd = r - d;
	int count = 0;
	for (int i=0; i<n; i++) {
		int xi, yi, ri;
		cin>>xi>>yi>>ri;
		if (((fabs(xi) >= (crd + ri)) && (fabs(xi) <= (r - ri))) || ((fabs(yi) >= (crd + ri)) && (fabs(yi) <= (r - ri))) || (((fabs(xi) >= (crd + ri)) && (fabs(xi) <= (r - ri))) && ((fabs(yi) >= (crd + ri)) && (fabs(yi) <= (r - ri))))) {
			cout<<"counted";
			count++;
		}
	}
	cout<<count;
	return 0;
}
