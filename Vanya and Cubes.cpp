#include<iostream>

using namespace std;

int main() {
	int n;
	cin>>n;
	int rowCount = 0, sum = 0, cubes = 0, i=1;
	while (sum < n) {
		cubes = cubes + i;
		sum += cubes;
		i++;
		rowCount++;
	}
	if (sum >n)
		cout<<rowCount-1;
	else
		cout<<rowCount;
	return 0;
}
