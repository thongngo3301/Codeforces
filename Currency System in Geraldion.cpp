#include <iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int a;
	bool check = false;
	for (int i=0; i<n; i++) {
		cin>>a;
		if (a==1)
			check = true;
	}
	if (check)
		cout<<-1;
	else
		cout<<1;
	return 0;
}
