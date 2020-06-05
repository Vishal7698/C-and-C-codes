/*Write a program which accept number from user and count frequency of such a
digits which are less than 6.
Input : 2395
Output : 3

Input : 96672
Output : 1
*/

#include<stdio.h>
int ChkCount(int iNo)
{
	int iDigit=0;
	int iCount=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit<6)
 		{
			iCount=iCount+1;
		}
		iNo=iNo/10;
	}
	return iCount;
}

int main()
{
	int iValue=0,iRet=0;

	printf("Enter the number:");
	scanf("%d",&iValue);
	iRet=ChkCount(iValue);
	printf("%d",iRet);
	return 0;
}
