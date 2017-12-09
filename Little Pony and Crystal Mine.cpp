#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,k,l;
    int d=n/2;
    int odd=1;
    for(i=1;i<=d;i++)
    {
        for(j=1;j<=d-i+1;j++)
        {
            cout<<"*";
        }


        for(j=1;j<=odd;j++)
        {

               cout<<"D";

        }
        odd+=2;
        for(j=1;j<=d-i+1;j++)
        {
            cout<<"*";
        }


        cout<<endl;


    }
    for(i=1;i<=n;i++)
        cout<<"D";
    cout<<endl;

    odd-=2;
    for(i=1;i<=d;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }


        for(j=1;j<=odd;j++)
        {

               cout<<"D";

        }
        odd-=2;
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }


        cout<<endl;


    }




    return 0;
}
