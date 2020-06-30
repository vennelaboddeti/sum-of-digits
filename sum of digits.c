#include<stdio.h>
int sum(int num);  //function prototype declaration
void main()
{
	int num,res;
	printf("enter a number :\n");
	scanf("%d",&num);
	res=sum(num);  // function call
	printf("the sum of the digits of %d is %d",num,res);
}
int sum (int num)   //function definition
{
	if(num==0)
	return 0;
	else
	return((num%10)+sum(num/10));
}
