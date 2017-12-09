#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1],minpos,maxpos;
    for(int i=0;i<n;i++)
       {
           cin>>a[i];
            if(a[i]==1)
                minpos=i;
            if(a[i]==n)
                maxpos=i;
       }
    if(minpos-maxpos==n-1||minpos-maxpos==-(n-1))
    {
        cout<<n-1<<endl;
    }
    else
    {
        if(minpos<maxpos)
        {
            if(maxpos-0>(n-1)-minpos)
                cout<<maxpos-0<<endl;
            else
                 cout<<(n-1)-minpos<<endl;
        }
        else
        {
            if(minpos-0>(n-1)-maxpos)
                cout<<minpos-0<<endl;
            else
                 cout<<(n-1)-maxpos<<endl;
        }
    }
}
