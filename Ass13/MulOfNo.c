/*Write a program which accept number from user and return multiplication of all
digits.
Input : 2395
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
*/

#include<stdio.h>
int MulOfNo(int iNo)
{
	int iDigit=0;
	int iMul=1;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
 		{
			iDigit=iDigit+1;
		}
		iMul=iMul*iDigit;
		iNo=iNo/10;
	}
	return iMul;
}

int main()
{
	int iValue=0,iRet=0;

	printf("Enter the number:");
	scanf("%d",&iValue);
	iRet=MulOfNo(iValue);
	printf("%d",iRet);
	return 0;
}
