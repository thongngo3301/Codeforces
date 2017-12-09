#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

bool lucky(string n){
    for(int i=0; i<n.length(); i++){
        if(n[i] != '4' && n[i] != '7')
            return false;
    }
    return true;
}

std::string IntToString ( int number )
{
  std::ostringstream oss;

  // Works just like cout
  oss<< number;

  // Return the underlying string
  return oss.str();
}

bool nearLucky(string n){
    int num = 0;
    for(int i=0; i<n.length(); i++){
        if(n[i] == '7' || n[i] == '4'){
            num++;
        }
    }
    if(lucky(IntToString(num))){
        return true;
    }else{
        return false;
    }
}

int main(){
    string n;
    cin>>n;

        if(nearLucky(n)){
            cout<<"YES";
        }else{
            cout<<"NO";
        }

    return 0;
}
