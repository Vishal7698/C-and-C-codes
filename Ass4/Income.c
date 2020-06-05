#include<stdio.h>

float IncomeTax(int iAmount)
{
	float iTax=0.0;
	if(iAmount<0)
	{
		iAmount=-iAmount;
	}

	if(iAmount<500000)
	{
		return iTax;
	}

	else if((iAmount>500000)&&(iAmount<=1000000))
	{
		iTax=(iAmount-500000)*0.1;
		return iTax;
	}

	else if((iAmount>1000000)&&(iAmount<2000000))
	{
		iTax=(iAmount-1000000)*0.2+50000;
		return iTax;
	}

	else if(iAmount>2000000)
	{
		
		iTax=(iAmount-2000000)*0.3+50000+200000;
		return iTax;
	}
}

int main()
{
	int iValue=0;
	int iRet=0.0;
	printf("Enter amount:");
	scanf("%d",&iValue);
	iRet=IncomeTax(iValue);
	printf("Amount with incomtax:%d\n",iRet);
	return 0;
}
