#include<stdio.h>

int main()
{

int n;
scanf("%d",&n);

int i,k;

int total=0;
for(i=0;i<3;i++)
{
scanf("%d",&k);

total+=k;

}

total=n-total;
printf("%d",total);



}
