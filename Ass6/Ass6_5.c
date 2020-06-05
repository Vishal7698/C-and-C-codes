#include<stdio.h>
float Percentage(float iNo1,float iNo2)
{
	float Total;
	//printf("%d %d",iNo1,iNo2);
	 Total=(iNo2*100)/iNo1;
	 return Total;
	
}

int main()
{
	float iValue1 = 0.0,iValue2 = 0.0;
	float fRet = 0.0;

	printf("Please enter total marks:\n");
	scanf("%f",&iValue1);
	printf("Please enter obtained marks:\n");
	scanf("%f",&iValue2);
	fRet = Percentage(iValue1,iValue2);
	printf("Percentage is:%f\n",fRet);
	return 0;
}
