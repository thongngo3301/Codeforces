#include<iostream>
using namespace std;
int main(){
	int k, l, m, n, d;
	cin>>k>>l>>m>>n>>d;
	int min = k;
	if (min > l) min = l;
	if (min > m) min = m;
	if (min > n) min = n;
	if (d < min){
		cout<<"0";
		return 0;
	}
	int count=0;
	for (int i=min; i<=d; i++) {
		if (!(i%k) || !(i%l) || !(i%m) || !(i%n))
			count++;
	}
	cout<<count;
	return 0;
}
