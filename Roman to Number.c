#include <stdio.h>
#include<string.h>
int main(void) {
	
	int a[10],i,b;
	char t[2];
	scanf("%s",t);
	b=strlen(t);
	for(i=0;i<b;i++)
	{
		if(t[i]=='I')
		{
			a[i]=1;
		}
		else if(t[i]=='V')
		{
			a[i]=5;
		}
		else if(t[i]=='X')
		{
			a[i]=10;
		}
		else
		{
		printf("this is not roman letter");
		}
	}
	int k=a[b-1];
	for(i=b-1;i>0;i--)
	{
		if(a[i]<a[i-1])
		{
			k+=a[i-1];
		}
		else if(a[i]>a[i-1])
		{
		k-=a[i-1];
     		}   
	}
	printf("Number:%d",k);
	return 0;
}
