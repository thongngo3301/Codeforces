#include<iostream>
using namespace std;
int main(){
	string str;
	cin>>str;
	bool need = true;
	for (int i=1; i<str.length(); i++){
		if (str[i]>=(char)97 && str[i]<=(char)122){
			need = false;
			break;
		}
	}
	if (need){
		for (int i=0; i<str.length(); i++){
			if(str[i]>=(char)97 && str[i]<=(char)122)
				str[i] = toupper(str[i]);
			else
				str[i] = tolower(str[i]);
		}
	}
	cout<<str;
	return 0;
}
