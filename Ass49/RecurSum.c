/*2. Write a recursive program which accept number from user and return
summation of its digits.
Input : 879
Output : 24
*/


#include<stdio.h>


int SumDigitI(int iNo)
{
	int iDigit=0;
	int Sum=0;
	int i=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		Sum=Sum+iDigit;
		iNo=iNo/10;
	}
	return Sum;
}

int SumDigitR(int iNo)
{
	static int iDigit=0,iRet=0,sum=0;

	if(iNo>0)
	{
		iDigit=iNo%10;
		sum=sum+iDigit;
		iNo=iNo/10;
		SumDigitR(iNo);
	}
	return sum;
}
int main()
{
	int iValue=0;
	int iRet=0;

	printf("ENter the number :");
	scanf("%d",&iValue);

	iRet=SumDigitI(iValue);
	printf("\nsum is:%d",iRet);

	iRet=SumDigitR(iValue);
	printf("\nSum is::%d",iRet);

	return 0;
}
