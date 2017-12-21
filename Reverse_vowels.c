#include <stdio.h>

int main(void) 
{
	char a[10];
	int b,i;
	scanf("%s",&a);
	b=strlen(a);
	printf("Reverse: ");
	for(i=b-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	printf("\nVowels: ");
	for(i=b-1;i>=0;i--)
	{
		if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
		{
			printf("%c",a[i]);
		}
	}
	return 0;
}
