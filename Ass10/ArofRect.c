#include<stdio.h>

double ArrOfRect(float fWidth,float fHeight)
{
	float Area=0.0;
	if(fWidth<0)
	{
		fWidth=-fWidth;
	}

	if(fHeight<0)
	{
		fHeight=-fHeight;
	}

	Area=fWidth*fHeight;
	return Area;
}

int main()
{
	float fValue1=0.0,fValue2=0.0,fRet=0.0;
	printf("Enter the w and h:");
	scanf("%f %f",&fValue1,&fValue2);
	fRet=ArrOfRect(fValue1,fValue2);
	printf("Area:%f",fRet);
	return 0.0;
}
	
