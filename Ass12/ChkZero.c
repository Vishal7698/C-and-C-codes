/*Write a program which accept number from user and check whether it contains 0
in it or not.
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkZero(int iNo)
{
	int iDigit=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			return TRUE;
		}

		iNo=iNo/10;
	}
}

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	printf("enter the no:");
	scanf("%d",&iValue);

	bRet=ChkZero(iValue);
	
	if(bRet==TRUE)
	{
		printf("It contents zero");
	}
	else
	{
		printf("there is no zero");
	}
	return 0;
}
