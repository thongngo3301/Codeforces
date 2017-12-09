#include <bits/stdc++.h>

using namespace std;

int main() {
	string input;
    cin>>input;
    size_t found = input.find("AB");
    size_t foundReverse = input.find("BA");

    while(found!=string::npos){
        foundReverse = input.find("BA");
        if(foundReverse != string::npos){
            if(foundReverse == found-1 || foundReverse == found+1){
                foundReverse = input.find("BA",foundReverse+1);
                if(foundReverse != string:: npos){
                    if(foundReverse == found+1){
                        foundReverse = input.find("BA",foundReverse+1);
                        if(foundReverse != string::npos){
                            cout<<"YES";
                            return 0;
                        }else{
                            found = input.find("AB",found+1);
                        }
                    }else{
                        cout<<"YES";
                        return 0;
                    }
                }else{
                    found = input.find("AB",found+1);
                }
                continue;
            }else{
                cout<<"YES";
                return 0;
            }
        }else{
//            found = input.find("AB",found+1);
            break;
        }
    }
    cout<<"NO";

    return 0;
}
