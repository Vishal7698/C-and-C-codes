//Accept no and check the number is perfect no or not
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL PerfectNo(int iNo)
{
	int iCnt=0;
	int iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iCnt=(iNo/2);iCnt>=1;iCnt--)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
		if(iNo==iSum)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}

}

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	printf("enter the no");
	scanf("%d",&iValue);
	bRet=PerfectNo(iValue);

	if(bRet==TRUE)
	{
		printf( "is perfect no");
	}

	else
	{
		printf("%dis not perfect numbr",iValue);
	}
	printf("%d",bRet);
	return 0;
}
