#include <stdio.h>

int main(void) {
	int a,b=1,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	b=b*2;
	if(b==a)
	{
		printf("YES");
		break;
	}
  }
	if(b!=a)
	{
		printf("NO");
	}
	return 0;
}
