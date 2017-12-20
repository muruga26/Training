#include <stdio.h>
#include<string.h>
int main(void) 
{
char a[10],temp;
int i,j,count;
scanf("%s",a);
int b=strlen(a);
for(i=0;i<b;i++)
{
	count=1;
	for(j=i+1;j<b;j++)
	{
		if(a[i]==a[j])
		{
			count++;
			if(count>1)
			a[j]='+';
		}
	
	}
	if(a[i]!='+')
	printf("%c=%d  ",a[i],count);
	
}


	return 0;
}
