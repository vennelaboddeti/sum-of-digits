#include<stdio.h>
int lcm(int a,int b);  //function prototype declaration
void main()
{
	int num1,num2;
	printf("enter 2 numbers to find lcm:\n");
	scanf("%d%d",&num1,&num2);
	printf("the lcm of %d and %d is %d",num1,num2,lcm(num1,num2));

}
int lcm(int a,int b)  //function definition
{
	//static variable is initialized only once for each function call
	static int temp = 1;
	if(temp%a==0 && temp%b==0)
	{
		return temp;
	}
	else 
	{
		temp++;
		lcm(a,b);
		return temp;
		
	}
}
