/*3. Write a program which accept one number from user and check whether 9th or 12th bit is on or off.
Input : 257
Output : TRUE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef unsigned int UINT;
typedef int BOOL;

BOOL ChkBit(UINT iNo)
{
	UINT iResult1=0,iResult2=0;
	UINT iMask1=0,iMask2=0;

	iMask1=0x00000100;
	iMask2=0X00000c00;
	

	iResult1=iNo&iMask1;
	iResult2=iNo&iMask2;
	
	if((iResult1==iMask1)||(iResult2==iMask2))
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
	UINT iNo=0;
	BOOL bRet=FALSE;

	printf("ente the number:");
	scanf("%d",&iNo);

	bRet=ChkBit(iNo);
	if(bRet==TRUE)
	{
		printf("\nBit is on:");
	}
	else
	{
		printf("bit is off\n");
	}
	return 0;
}
