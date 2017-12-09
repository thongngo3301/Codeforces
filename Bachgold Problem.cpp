#include<iostream>

using namespace std;

int main() {
	long n;
	cin>>n;
	cout<<(n>>1)<<endl;
	if(n&1){
		cout<<3<<" ";
		n-=3;
	}
	while(n){
		cout<<2<<" ";
		n-=2;
	}
	return 0;
}
