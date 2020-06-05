/*5. Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.
Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 879.
*/

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleRange(UINT iNo,UINT iStart,int iEnd)
{
	UINT iMask=0,iMask1=0,iMask2=0,iResult=0;

	if((iStart<1)||(iStart>iEnd)||(iStart>32)||(iEnd<1)||(iEnd>32))
	{
		return iNo;
	}

	
	iMask1=0xfffffff;
	iMask2=0xffffffff;


	iMask1=iMask1<<(iStart-1);

	iMask2=iMask2>>(32-iEnd);

	iMask=iMask1&iMask2;

	iResult=iNo^iMask;

	return iResult;
}

int main()
{
	UINT iNo=0;
	UINT iRet=0;
	UINT iStart=0;
	UINT iEnd=0;

	printf("Enter the number:");
	scanf("%d",&iNo);

	printf("enter the 2 Rang:\n");
	scanf("%d %d",&iStart,&iEnd);

	iRet=ToggleRange(iNo,iStart,iEnd);
	printf("%d\n",iRet);
	return 0;
}
