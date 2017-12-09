#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	for (int i=0; i<str.length(); i++){
		str[i] = tolower(str[i]);
	}
	for (int i=0; i<str.length(); i++){
		if (str[i]=='a'||str[i]=='i'||str[i]=='u'||str[i]=='e'||str[i]=='o'||str[i]=='y'){
			str.erase(i,1);
			i--;
		}
	}
	for (int i=0; i<str.length(); i+=2){
		str.insert(i,".");
	}
	cout<<str;
	return 0;
}
