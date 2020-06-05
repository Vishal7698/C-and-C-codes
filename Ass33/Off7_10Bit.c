/*2. Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number.
Input : 577
Output : 1
*/


#include<stdio.h>
typedef unsigned int UINT;

UINT Off7th10(UINT iNo)
{
	UINT iMask=0,iResult=0,iReturn=0;
	
	iMask=0X00000240;

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

	iRet=Off7th10(iValue);
	printf("%d\n",iRet);
	return 0;
}

