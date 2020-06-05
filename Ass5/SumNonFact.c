//Write a program which accept number from user and return difference between
summation of all its factors and non factors.
#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt=0;
	int iSum=0;
	int iNDiff=0;
	int iDiff=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
		else
		{
			iNDiff=iNDiff+iCnt;
		}

		iDiff=iSum-iNDiff;
	}
	return iDiff;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the value:\n");
	scanf("%d",&iValue);

	iRet=SumNonFact(iValue);
	printf("Difference bet factor and non factor is:%d\n",iRet);
	return 0;
}
