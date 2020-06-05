#include<stdio.h>
void NonFact(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(!((iNo%iCnt)==0))
		{
			printf("%d\n",iCnt);
		}
	}
}

int main()
{
	int iValue=0;
	printf("enter the number:");
	scanf("%d",&iValue);
	NonFact(iValue);
	return 0;
}
