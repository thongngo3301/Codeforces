#include<iostream>

using namespace std;

int main() {
	int n, m, i, j, jD, jS;
	cin>>n>>m;
	int lineDot=2, lineSharp=4;
	for (i=1; i<=n; i++) {
		if (i%2) {
			for (j=1; j<=m; j++) {
				cout<<"#";
			}
			cout<<endl;
		}
		else {
			if (i==lineDot) {
				for (jD=1; jD<=m-1; jD++) {
					cout<<".";
				}
				cout<<"#"<<endl;
				lineDot += 4;
			}
			else if (i==lineSharp) {
				cout<<"#";
				for (jS=2; jS<=m; jS++) {
					cout<<".";
				}
				cout<<endl;
				lineSharp += 4;
			}
		}
	}
	return 0;
}
