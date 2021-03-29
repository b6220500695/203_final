#include<stdio.h>
int main()
{
   int N,n,max,i ;
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

return 0;
}
