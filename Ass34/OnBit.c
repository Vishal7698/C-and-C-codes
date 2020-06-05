/*3. Write a program which accept one number and position from user and on that bit. Return modified number.
Input : 10 3
Output : 14
*/

#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT iPos)
{
	UINT iMask=0,iResult=0;

	iMask=0X00000001;

	if((iPos>1)||(iPos<32))
	{
		
		iMask=iMask<<(iPos-1);
	}

	iResult=iNo|iMask;
	return iResult;
}

int main()
{
	UINT iValue=0,iRet=0;
	UINT iPos=0;
	printf("Enter the number:");
	scanf("%d",&iValue);

	printf("Enter the possition:\n");
	scanf("%d",&iPos);

	iRet=OffBit(iValue,iPos);
	printf("%d\n",iRet);
	return 0;
}
