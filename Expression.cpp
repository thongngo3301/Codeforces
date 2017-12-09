#include<iostream>

using namespace std;

int main() {
	int a, b, c;
	cin>>a>>b>>c;
	if (a==1 && b==1 && c==1)
		cout<<"3";
	else if (a==1 && c==1) {
		cout << (a+b+c);
	}
	else if (a==1) {
		cout << (a+b)*c;
	}
	else if (b==1) {
		cout << ((b + min(a, c)) * max(a, c));
	}
	else if (c==1) {
		cout << (c+b)*a;
	}
	else {
		cout<<(a*b*c);
	}
	return 0;
}
