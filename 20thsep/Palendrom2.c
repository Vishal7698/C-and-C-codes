//check palendrom using two diffrent function
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int iRev(int iNo)
{
	int iDigit=0;
	int iRev=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	return iRev;
}

BOOL ChkPalendrom(int iNo)
{
	int  bTemp=0;
	int iValue=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	bTemp=iRev(iNo);
	if(bTemp==iNo)
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
	printf("Enter the no:");
	scanf("%d",&iValue);
	
	bRet=ChkPalendrom(iValue);
	if(bRet==TRUE)
	{
		printf("its palendrom\n");
	}
	else
	{
		printf("its no\n");
	}
	return 0;
}
