#include<stdio.h>
#include<string.h>

int main()
{
	char a[100],b[100] ;
	int i ,c=0; 
	gets(a);
	gets(b);
	
	for(i=0 ; a[i] !='\0' ; i++)
	{
		if( a[i] != b[i])
		{
			c++;
		}
	}
		if(c == 1)
		printf("Yes");
		else
		printf("No");
	}
