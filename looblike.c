#include<stdio.h>
int main()
{
   int N,n,max=0,i=0 ;
   int x[1001];
   scanf("%d",&N);
   for(i=0;i<=10001;i++)
   {
      x[i]=0;
   }
   for(i=0;i<N;i++)
   {
    scanf("%d",&n);
    x[n]++;
   }
for(i=0;i<10001;i++)
   {
      if(x[i]>max)
      {
         max = x[i];
      }
      else if(x[i]==max)
      {
         printf("%d",i);
      }
   }
return 0;
}
