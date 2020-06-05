/*3. Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.
Input : 137
Output : 201
*/

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{

	UINT iMask=0,iResult=0,iRet=0;
	iMask=0X00000040;

	iResult=iNo&iMask;
	if(iResult==iMask)
	{
		iRet=iNo^iMask;
	}
	else
	{
		iRet=iNo|iMask;
	}
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
