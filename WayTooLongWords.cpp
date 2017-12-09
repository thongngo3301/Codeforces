#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string *arr1 = new string[n];
	for (int i=0; i<n; i++)
		cin>>arr1[i];
	for (int i=0; i<n; i++){
		if (arr1[i].length()>10){
			cout<<arr1[i].at(0)<<"";
			cout<<arr1[i].length()-2<<"";
			cout<<arr1[i].at(arr1[i].length()-1)<<""<<endl;
		}
		else {
			cout<<arr1[i]<<endl;;
		}
	}
	return 0;
}
