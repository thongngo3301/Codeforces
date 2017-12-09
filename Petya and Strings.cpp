#include <iostream>

using namespace std;

int main(){
	string a, b;
	string status = "";
	cin >> a >> b;
	
	int i = 0;
	do{
		if ( tolower(a[i]) > tolower(b[i]) )
			status = "1";
		else if ( tolower(a[i]) < tolower(b[i]) )
			status = "-1";
		i++;
	} while ( status.length() == 0 && i < a.length() );
	
	if ( status.length() == 0 )
		cout << "0";
	else 
		cout << status;
	
	return 0;
}
