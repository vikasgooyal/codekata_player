#include<stdio.h>
#include<string.h>
int main()
{
	
   int n,i,s,j,a=0;
   scanf("%d",&n);
   
  

while(n!=0){
	s=n%10;
	a=a*10 + s;
	n=n/10;
   } 
   printf("%d",a);  
   }



	
