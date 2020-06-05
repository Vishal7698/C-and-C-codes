#include<stdio.h>

double CircleArea(float fRadius)
{
	float Area=0.0;
	float PI=3.14;
	
	if(fRadius<0)
	{
		fRadius=-fRadius;
	}

	Area=PI*fRadius*fRadius;
	return Area;
}

int main()
{
	float fValue=0.0,fRet=0.0;
	printf("Enter the radius");
	scanf("%f",&fValue);
	fRet=CircleArea(fValue);
	printf("%f",fRet);
	return 0.0;
}
