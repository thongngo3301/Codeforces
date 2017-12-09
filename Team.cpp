#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count=0;
	int arr[3];
	int c=0;
	int csum=0;
	while(count<n){
		for (int i=0; i<3; i++){
			cin>>arr[i];
			if (arr[i]==1)
				c++;
		}
		if (c>=2)
			csum++;
		count++;
		c=0;
	}
	cout<<csum;
	return 0;
}
