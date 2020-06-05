#include<stdio.h>

double FarToCels(float fTemp)
{
	float iCnt=0.0;
	if(fTemp<0.0)
	{
		fTemp=-fTemp;
	}
	
	iCnt=(fTemp-32)*5/9;
	return iCnt;
}

int main()
{
	float fValue=0.0,fRet=0.0;

	printf("Enter the tempreture in far:");
	scanf("%f",&fValue);
	fRet=FarToCels(fValue);
	printf("%f\n",fRet);
	return 0;
}

	
