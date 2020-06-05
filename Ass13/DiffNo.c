/*Write a program which accept number from user and return difference between
summation of even digits and summation of odd digits.
Input : 2395
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)
*/

#include<stdio.h>

int CountDiff(int iNo)
{
	int iDigit=0;
	int iESum=0;
	int iOSum=0;
	int iDif=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iESum=iESum+iDigit;
		}
		else
		{
			iOSum=iOSum+iDigit;
		}
	
		iDif=iESum-iOSum;
		iNo=iNo/10;
	}
	return iDif;
}

int main()
{
	int iValue=0,iRet=0;
	printf("Enetr the no:");
	scanf("%d",&iValue);
	iRet=CountDiff(iValue);
	printf("%d",iRet);
	return 0;
}
