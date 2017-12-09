#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	string str1, str2, strCombine;
	cin>>str1>>str2>>strCombine;
	string S;
	int i, j;
	S += (str1 + str2);
	sort(strCombine.begin(), strCombine.end());
	sort(S.begin(), S.end());
	if (S == strCombine)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
