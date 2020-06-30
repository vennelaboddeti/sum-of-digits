#include<stdio.h>
void main()
{
	int n,i,c=0;
	printf("enter a number:\n");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{ 
	    // for no. of divisors
		if(n%i==0)
		{
			c++;
		}
	}
	if (c==1)
	{
		printf("the number %d is prime",n);
	}
	else
	{
		printf("the number %d is not prime",n);
	}
}
