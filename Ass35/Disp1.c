/*2. Write a program which accept two numbers from user and display position of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4
*/

#include<stdio.h>
typedef unsigned int UINT;


void CommonBit(UINT iNo1,UINT iNo2)
{
	UINT iResult=0;
	UINT iCnt=0;
	UINT iMask=0;
	UINT iNo=0;

	iCnt=1;
	iMask=1;

	iNo=iNo1&iNo2;
	while(iNo>0)
	{
		iResult=iNo&iMask;
		if(iResult==1)
		{
			printf("%d\n",iCnt);
			
		}
		iCnt++;
		iNo=iNo>>1;
		
	}
	
}

int main()
{
	UINT iNo1=0;
	UINT iNo2=0;
	printf("enetr 1st number:");
	scanf("%d",&iNo1);

	printf("Enter the 2nd number:");
	scanf("%d",&iNo2);

	CommonBit(iNo1,iNo2);
	return 0;
}
