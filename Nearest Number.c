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
      printf("%d ",n%10);
      }
      k=n*10;
     if(k>n)
      {
      k=k/100;
      printf(" %d",k+1);
      }
      printf(" %d",c);
      }
   return 0;
}
