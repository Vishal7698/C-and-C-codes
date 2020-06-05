#include<stdio.h>

int DigitCoutn(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	while(iNo!=0)
	{
		iCnt++;
		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the number:");
	scanf("%d",&iValue);
	iRet=DigitCoutn(iValue);
	printf("%d\n",iRet);
	return 0;
}
