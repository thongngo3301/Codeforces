#include<bits/stdc++.h>

using namespace std;

int main() {
	int n,a,p;
	int money = 0, price = 101;
	cin>>n;
	while(n--){
		cin>>a>>p;
    	if(price > p) { 
			price = p;
		}
    	money += price * a;
  	}
  	cout<<money;
 	return 0;
}
