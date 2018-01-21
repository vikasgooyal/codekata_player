#include<stdio.h>
#include<string.h>

int main()
{
	char a[26], c[30];
	char b[1] = {'.'};
	
	gets(a);
	
	strcat(a,b);

	puts(a);
}
