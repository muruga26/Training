int main(void) 
{
    int j,b;
    char a[10],temp;
    scanf("%s",&a);
    b=strlen(a);
    
    	for(j=0;j<b;j++)
    	{
    	temp=a[j];
    	a[j]=a[j+1];
    	a[j+1]=temp;
    	j++;
    	
    	}
    printf("%s",a);
    return 0;
}
