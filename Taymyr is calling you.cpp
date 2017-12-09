#include<stdio.h>  
#include<string.h>  
using namespace std;  
int main()  
{  
    int n,m,z;  
    while(~scanf("%d%d%d",&n,&m,&z))  
    {  
        int cnt=0;  
        for(int i=1;i<=z;i++)  
        {  
            if(i%n==0&&i%m==0)  
            {  
                cnt++;  
            }  
        }  
        printf("%d\n",cnt);  
    }
	return 0; 
}  
