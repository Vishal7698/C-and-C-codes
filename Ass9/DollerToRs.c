#include<stdio.h>

int DollerToRs(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	iCnt=70*iNo;
	return iCnt;
}

int main()
{
	int iValue=0,iRet=0;
	printf("enter the amount:");
	scanf("%d",&iValue);
	iRet=DollerToRs(iValue);
	printf("Rs:%d",iRet);
	return 0;
}
