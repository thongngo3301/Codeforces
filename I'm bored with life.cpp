#include<bits/stdc++.h>

using namespace std;

int main() {
    long long a,b,i,mn,sum;
    cin>>a>>b;
    mn=min(a,b);
    sum=1;
    while(mn) {
        sum*=mn;
        mn--;
    }
    cout<<sum;
    return 0;
}
