/*1.Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE.
Input : 10 2
Output : TRUE
*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0

BOOL ChkBit15(UINT iNo,int iPos)
{
	UINT iMask=0;
	UINT iResult=0;
	
	
	iMask=0X00000001;
	iMask=iMask<<(iPos-1);

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
	UINT iValue1=0,iValue2=0;
	BOOL bRet=FALSE;
	printf("enter the number");
	scanf("%d",&iValue1);

	printf("Enter the position:");
	scanf("%d",&iValue2);
	bRet=ChkBit15(iValue1,iValue2);
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
