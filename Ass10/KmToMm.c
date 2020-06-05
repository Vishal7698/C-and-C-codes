//#include<stdio.h>
#include<stdio.h>

int KmToMm(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	iCnt=iNo*1000;
	return iCnt;
}

int main()
{
	int iValue=0,iRet=0;

	printf("Enter Kilometer:");
	scanf("%d",&iValue);
	
	iRet=KmToMm(iValue);
	printf("%d\n",iRet);
	return 0;
}
