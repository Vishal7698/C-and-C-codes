/*Write a program which accept number from user and return the count of digits in
between 3 and 7.
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 4521
*/
#include<stdio.h>
int CountBtThreeFour(int iNo)
{
	int iDigit=0;
	int iCount=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit>3)&&(iDigit<7))
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
	iRet=CountBtThreeFour(iValue);
	printf("%d",iRet);
	return 0;
}
