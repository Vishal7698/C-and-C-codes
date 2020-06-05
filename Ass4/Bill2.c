#include<stdio.h>

float CalculateBill(int iAmount)
{
	float iBill=0.0; 
	if(iAmount<0)
	{
		iAmount=-iAmount;

	}

	if(iAmount<=500)
	{
		return iAmount;
	}

	else if((iAmount>500)&&(iAmount<=1500))
	{
		iBill=0.1*iAmount;
		iAmount=iAmount-iBill;
		return iAmount;
	}

	else if(iAmount>1500)
	{
		iBill=0.15*iAmount;
		iAmount=iAmount-iBill;
		return iAmount;
	}
}

int main()
{
	int iBill=0;
	float iRet=0;
	printf("Enter the Bill");
	scanf("%d",&iBill);
	iRet=CalculateBill(iBill);
	printf("total ammount is%f\n",iRet);
	return 0;
}
