#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int countM = 0, countC = 0;
	int m, c;
	for (int i=0; i<n; i++) {
		cin>>m>>c;
		if (m > c)
			countM++;
		else if (m < c)
			countC++;
	}
	if (countM > countC)
		cout<<"Mishka";
	else if (countM < countC)
		cout<<"Chris";
	else
		cout<<"Friendship is magic!^^";
	return 0;
}
