#include<stdio.h>

void Display(int iNo)
{
	if(iNo>9)
	{
		printf("invalid");
	}
	if(iNo==0)
	{
		printf("zero");
	}
	else if(iNo==1)
	{
		printf("one");
	}
	else if(iNo==2)
	{
		printf("two");
	}
	else if(iNo==3)
	{
		printf("three");
	}
}

int main()
{
	int iValue=0;
	printf("Enter the no:\n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}
