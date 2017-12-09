#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
#define pf printf
#define sf scanf
#define loop(i, n) for(i=0; i<n; i++)
#define MAX 105
int a[MAX], index[MAX], step[MAX], step2[MAX], small[MAX];
float big[MAX];
int main()
{
    int n, m, ans, temp;
    int i, j, s=1, b=1, s2=1, sm=1;
    ans =0;
    temp =0;
    cin >> n >> m;
    i = 1;
    for(j=1; j<=n; j++)
    {
        cin >> a[j];
        small[sm++] = a[j];
        if(a[j]>m)
        {
            big[b] = a[j];
            index[i++] = j;
            step[s] = ceil(big[b]/m);
            step2[s2++] = step[s];
            b++;
            s++;
        }
    }
    if(b>1)
    {
        sort(step2, step2+s2);
        for(j=1; j<s; j++)
        {
            if(step2[s2-1]==step[j])
            {
                temp = j;
            }
        }
        ans = index[temp];
        cout << ans << endl;
    }
    else
    {
        i =1;
        for(j=1; j<=n ;j++)
        {
            if(small[sm-1]==a[j])
            {
                index[i++] = j;
            }
        }
        cout << index[i-1] << endl;
    }
    return 0;
}
