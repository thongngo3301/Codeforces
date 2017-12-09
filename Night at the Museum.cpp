#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char p='a';
    int cnt=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if((abs(s[i]-p))>13)
            cnt+=(26%(abs(s[i]-p)));
        else 
            cnt+=(abs(s[i]-p));
        p=s[i];
    }
    cout<<cnt;
    return 0;
}
