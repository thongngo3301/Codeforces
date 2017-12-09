#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t, sum = 0, s = 0, sval = 0;
	vector<int> a;
	cin >> n;
	for ( int i = 0; i < n; i++ ){
		cin >> t;
		sum += t;
		a.push_back(t);
	}
	
	sort(a.begin(), a.end(), greater<int>());
	
	int i = 0;
	
	while ( sval <= sum - sval && i < a.size()){
		s++;
		sval += a[i];
		i++;
	}
	
	cout << s;
	
	return 0;
}
