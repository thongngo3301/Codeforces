#include<iostream>
using namespace std;
int main(){
	int n, count=0;
	cin>>n;
	int tmp=0, max=0;
	for (int i=0; i<n; i++){
		int len=0, xuong=0;
		cin>>xuong>>len;
		tmp += len;
		tmp -= xuong;
		if (tmp > max){
			max = tmp;
		}
	}
	cout<<max;
	return 0;
}
