#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	int count=0;
	for (int i=0; i<str.length(); i++){
		if ( (str[i]=='R' && str[i+1]=='R') || (str[i]=='G' && str[i+1]=='G') || (str[i]=='B' && str[i+1]=='B')){
			count++;
		}
	}
	cout<<count;
	return 0;
}
