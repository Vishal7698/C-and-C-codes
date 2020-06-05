//accept no and check the number is prime or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL PrimeOrNot(int iNo)
{
	int iCnt=0;
	BOOL flag;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iCnt=(iNo/2);iCnt>1;iCnt--)
	{
		if((iNo%iCnt)==0)
		{
			return FALSE;
		}
		else
		{
			return TRUE;
		}
	}
}

int main()
{
	int iValue=0;
	BOOL iRet=FALSE;

	printf("Enter the number:");
	scanf("%d",&iValue);
	iRet=PrimeOrNot(iValue);
	if(iRet==TRUE)
	{
		printf("its a prime no%d",iRet);
	}
	else
	{
		printf("its not prime");
	}
	return 0;
}
