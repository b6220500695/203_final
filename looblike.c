#include<stdio.h>
int main()
{
   int N,n,max,x[1000],i ;
   printf("Input\n");
   scanf("%d",&n);
   for(i=0;i<=10001;i++)
   {
      x[i]=0;
   }
   for(i=0;i<n;i++)
   {
    scanf("%d",&n);
    x[n]++;
   }
   for(i=0;i<10001;i++)
   {
      if(x[i]<max)
      {
         max = x[i];
      }

   }
   for(i=0;i<10001;i++)
   {
      if(x[i]==max)
         {
            printf("%d",i);
         }
   }
return 0;
}
