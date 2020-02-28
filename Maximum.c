#include<stdio.h>

int main()
{

int n;

scanf("%d",&n);

int arra[100];

int i;

for(i=0;i<n;i++)
{
scanf("%d",&arra[i]);
}

int maximum;

maximum=arra[0];


for(i=1;i<n;i++)
{

if(maximum<arra[i])

{
maximum=arra[i];


}

}
printf("%d\n",maximum);

return 0;
}
