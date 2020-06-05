/*Write a program which accept number from user and count frequency of 4 in it.
Input : 2395
Output : 0

Input : 9440
Output : 2
*/

#include<stdio.h>
int ChkCountFour(int iNo)
{
	int iDigit=0;
	int iCount=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==4)
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
	iRet=ChkCountFour(iValue);
	printf("%d",iRet);
	return 0;
}
