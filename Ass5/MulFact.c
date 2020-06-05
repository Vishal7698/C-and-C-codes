#include<stdio.h>
int MulFactor(int iNo)
{
	int iCnt=0;
	int iMul=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iMul=iMul*iCnt;
			
		}
		
	}
return iMul;
}

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the numbr:");
	scanf("%d",&iValue);
	iRet=MulFactor(iValue);
	printf("multilpication is:%d",iRet);
	return 0;
}
