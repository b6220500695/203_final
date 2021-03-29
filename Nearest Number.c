#include<stdio.h>
int main()
{
   int k,c,a,n;
   scanf("%d %d",&n,&c);
   if((n>0)&&(n<32750))
   {
      {
      n=n/10;
      k=n;
      a=(k/10)+(k%10);
       printf("%d",a);
      }
      if(k>c)
      k=n/10;
      printf(" %d ",k+1);
      printf("%d",c);
   }
   return 0;
}
