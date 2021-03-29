#include<stdio.h>
int main()
{
   int k,c,n,i,j;
   scanf("%d %d",&n,&c);
   if((n>0)&&(n<32750))
   {
      {
      n=n/10;
      n=(n%10)+1;
      printf("%d",n);
      }
      printf("%d",c);
   }
   return 0;
}
