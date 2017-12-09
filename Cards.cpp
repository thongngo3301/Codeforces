#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>
using namespace std;
#define CLR(a,b)  memset(a,b,sizeof(a))
struct node
{
	int num,ant;
}a[110];
bool cmp(node x,node y)
{
	return x.ant<y.ant;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i].ant);
		a[i].num=i;
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=(n/2);i++)
		printf("%d %d\n",a[i].num,a[n+1-i].num);
	return 0;
}
