#include<stdio.h>

int main()
{
long int n,num,i;
scanf("%d",&n);


double sum=0;
for(i=1;i<=n;i++)
{
scanf("%d",&num);

sum=(sum+num)/i;

printf("%lf\n",sum);
sum=sum*i;
}




return 0;
}
