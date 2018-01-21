#include<stdio.h>
int main()
{
	
   long long int n,i,s,j,a=1;
   scanf("%lld",&n);
   if(n <0 || n >20)
   printf("0");
   else{
   for(i=1 ; i<=n ; i++)
   {
   	a=a*i;
   }

   printf("%lld",a); 
}
   }
