#include<stdio.h>

void Number(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	if(iNo<50)
	{
		printf("small");
	}

	else if((iNo>50)&&(iNo<100))
	{
		printf("medium");
	}
	
	else if(iNo>100)
	{
		printf("large");
	}
}

int main()
{
	int iValue=0;
	printf("enter the no:\n");
	scanf("%d",&iValue);
	Number(iValue);
	return 0;
}
