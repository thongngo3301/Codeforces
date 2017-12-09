#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string str;
	cin>>str;
	sort(str.begin(), str.end());
	for (int i=0; i<str.length(); i++){
		int j=i;
			while (str[j]==str[i]){
				j++;
			}
		str.erase(i,j-1-i);
	}
	if (str.length()%2)
		cout<<"IGNORE HIM!";
	else
		cout<<"CHAT WITH HER!";
	return 0;
}
