#include<iostream>
#include<algorithm>
using namespace std;

// Function to reverse a string
void reverseStr(string &str){
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i=0; i<n/2; i++)
       swap(str[i], str[n-i-1]);
}

int main() {
	string s, t;
	cin>>s>>t;
	string tmp = s;
	reverseStr(tmp);
	if (tmp == t)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
