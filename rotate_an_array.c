#include <stdio.h>

int main(void) 
{
int a[10],n,k,i,temp;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
while(k>0)
{
	temp=a[0];
	for(i=0;i<n;i++)
	{
		a[i]=a[i+1];
	}
	a[n-1]=temp;
	k--;
}
for(i=0;i<n;i++)
{
	printf("%d\n",a[i]);
}
	return 0;
}
