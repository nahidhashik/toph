#include<stdio.h>

int main()
{
int n,k;
scanf("%d %d",&n,&k);

int num,sum;
if(n>k)
{
 num=n%k;
 sum=n/k;

 printf("%d %d %d\n",sum,num,k);


}




return 0;

}
