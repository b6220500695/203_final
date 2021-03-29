#include<stdio.h>
int main()
{
   int k,c,n,i;
   scanf("%d %d",&n,&c);
   if((n>0)&&(n<32750))
   {
      {
      n=n/10;
      k=n;
      printf("%d",k%10);
      }
      k=k*100;
if(k>n)
      {
      n=n/10;
      k=n;
      printf("%d",k%10+1);
      }

      printf("%d",c);
      }
   return 0;
}
