#include<stdio.h>

int SchoolFees(int iStandard)
{
	if((iStandard<=0)||(iStandard>4))
	{
		printf("Wrong input");
		
	}

	if(iStandard==1)
	{
		printf("Fees are 8900\n");
	}

	else if(iStandard==2)
	{
		printf("Fees are 12790");
	}

	else if(iStandard==3)
	{
		printf("fees are 21000");
	}

	else if(iStandard==4)
	{
		printf("Fess are 23450:\n");
	}

	
}

int main()
{
	int iValue=0;
	printf("Enter the standerd:");
	scanf("%d",&iValue);
	SchoolFees(iValue);
	return 0;
}
