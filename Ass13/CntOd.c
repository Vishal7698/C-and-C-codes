/*Write a program which accept number from user and return the count of odd
digits.
Input : 2395
Output : 3
Input : 1018 op:2
Input : 8462
Output : 0
*/

#include<stdio.h>
int CountOd(int iNo)
{
	int iDigit=0;
	int iCount=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)!=0)
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
	iRet=CountOd(iValue);
	printf("%d",iRet);
	return 0;
}
