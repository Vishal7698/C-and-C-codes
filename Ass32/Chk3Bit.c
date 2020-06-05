/*4. Write a program which checks whether 7th & 8th & 9th bit is On or OFF.
*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit15(UINT iNo)
{
	UINT iMask=0;
	UINT iResult=0;
	
	iMask=0X000001C0;
	
	iResult=iNo&iMask;
	
	if(iResult==iMask)
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
	UINT iValue=0;
	BOOL bRet=FALSE;
	printf("enter the number");
	scanf("%d",&iValue);
	bRet=ChkBit15(iValue);
	if(bRet==TRUE)
	{
		printf("bit is one");
	}
	else
	{
		printf("bit is 0");

	}
	return 0;
}
