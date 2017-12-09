#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n, m, a;
	cin>>n>>m>>a;
	//double dn = , dm = ;
	//cout<<(ceil(n/(double)a)*ceil(m/(double)a));
	cout << ((n + a - 1) / a) * ((m + a - 1) / a) << endl;
	return 0;
}
