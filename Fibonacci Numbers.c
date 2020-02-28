#include<stdio.h>

int main()
{

int n;

scanf("%d",&n);

int first_term=1,second_term=1,next_term=0;

int i;

for(i=1;i<n;i++)
{

next_term=first_term+second_term;

first_term=second_term;

second_term=next_term;

}

printf("%d\n",first_term);

return 0;
}
