#include<stdio.h>

void MultipleDisplay(int iNo)
{
	int iCnt=0;
	int iMul=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<=5;iCnt++)
	{
		iMul=iCnt*iNo;
		printf("%d\t",iMul);
	}
}

int main()
{
	int iValue=0;
	printf("Enter the no:\n");
	scanf("%d",&iValue);
	MultipleDisplay(iValue);
	return 0;
}

