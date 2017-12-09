#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cin>>str;
	for (int i=0; i<str.length(); i++){
		bool danger = true;
		for (int j=i+1; j<i+7; j++){
			if (str[i]!=str[j]){
				danger = false;
				break;
			}
		}
		if (danger==true){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
