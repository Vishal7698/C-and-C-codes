/*5. Write a program which accept one number from user and on its first 4
bits. Return modified number.
Input : 73
Output : 79
*/

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{

	UINT iMask=0,iResult=0,iRet=0;
	iMask=0X0000000F;

//	iResult=iNo&iMask;
	if(iNo!=iMask)
	{
		iRet=iNo|iMask;
		return iRet;
	}
	return iRet;
	/*else
	{
		iRet=iNo|iMask;
	}*/
}

int main()
{
	UINT iValue=0,iRet=0;
	
	printf("Enter the number:");
	scanf("%d",&iValue);

	iRet=ToggleBit(iValue);
	printf("%d",iRet);
	return 0;
}
