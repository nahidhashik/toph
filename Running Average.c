#include<stdio.h>

int main()
{
int n,num,i;
scanf("%d",&n);


float sum=0;
for(i=1;i<=n;i++)
{
scanf("%d",&num);

sum=(sum+num)/i;

printf("%f\n",sum);
sum=sum*i;
}




return 0;
}
