#include<stdio.h>
#include<string.h>

int main()
{
	char a[100],b[100] ;
	int i; 
	gets(a);
	
	for(i=0 ; a[i] != '\0'; i++)
	{
		if(i%2 ==0 )
		{
		
		b[i] = a[i + 1];
		printf("%c",b[i]);
		}else
		{
		
		b[i] = a[i - 1];
				printf("%c",b[i]);
}
	}
	
}
