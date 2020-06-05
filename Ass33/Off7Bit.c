/*1.Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.
Input : 79
Output : 15
*/

#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
	UINT iMask=0,iResult=0,iReturn=0;
	
	iMask=0X00000040;
	
	iResult=iNo&iMask;
	
	if(iResult==iMask)
	{
		iReturn=iNo^iMask;
		
		
		return iReturn;
	}
	else
	{
		return iNo;
	}
}

int main()
{
	UINT iValue=0,iRet=0;

	printf("Enter the number:");
	scanf("%d",&iValue);

	iRet=OffBit(iValue);
	printf("%d\n",iRet);
	return 0;
}
	
