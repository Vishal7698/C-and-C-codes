#include<stdio.h>

double SqM(int iValue)
{
	float iCnt=0.0;
	if(iValue<0)
	{
		iValue=-iValue;
	}

	iCnt=iValue*0.0929;
	return iCnt;
}

int main()
{
	int iNo=0;
	float fRet=0.0;
	printf("enter the square feet:");
	scanf("%d",&iNo);

	fRet=SqM(iNo);
	printf("%f\n",fRet);
	return 0;
}
