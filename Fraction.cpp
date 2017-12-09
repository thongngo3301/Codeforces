#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if(a%2 == 0)
    {
        int b = (a/2)+1, c = (a/2)-1;
        while(__gcd(b,c)!=1 && c!=1)
        {
            b++;
            c--;
        }
        cout << c << " " << b << endl;
    }
    else
    {
        int b = (a/2)+1, c = (a/2);
        while(__gcd(b,c)!=1 && c!=1)
        {
            b++;
            c--;
        }
        cout << c << " " << b << endl;
    }
    return 0;
}
