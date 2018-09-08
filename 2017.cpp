#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	char string[1000];

	while(n--)
	{
	scanf("%s",&string);
	int length=strlen(string);
	int count=0;
	int i;
	
		for(i=0;i<length;i++)
	{
		if(string[i]>='0'&&string[i]<='9')
		{
			count++;
		}
	}
	printf("%d\n",count);
	}
	
}