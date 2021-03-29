#include<stdio.h>
int main()
{
   int k,c,n;
   scanf("%d %d",&n,&c);
   if((n>0)&&(n<32750))
   {
      {
      n=n/10;
      k=n;
      printf("%d",k);
      }

      printf("%d",c);
      }
   return 0;
}
