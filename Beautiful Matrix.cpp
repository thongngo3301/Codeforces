#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int i1 = 0, j1 = 0;
	int arr[5][5];
	for (int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin>>arr[i][j];
			if (arr[i][j] == 1){
				i1 = i+1;
				j1 = j+1;
			}
		}
	}
	int count = abs(i1 - 3) + abs(j1 - 3);
	cout<<count;
	return 0;
}
