#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char s[100005];
    gets(s);
    printf("%s",s);
    for (int i=strlen(s)-1;i>-1;i--) printf("%c",s[i]);
    printf("\n");
    return 0;
}
