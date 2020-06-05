/*5. Write a recursive program which accept number from user and return its
product of digits.
Input : 523
Output : 30
*/

#include<stdio.h>

int ProductI(int iNo)
{
	int iDigit=0;
	int Product=1;
	
	while(iNo>0)
	{

		iDigit=iNo%10;
		Product=Product*iDigit;
		iNo=iNo/10;
	}
	return Product;
}

int ProductR(int iNo)
{
	static int iDigit=0;
	static int Product=1;
	if(iNo>0)
	{
		
		iDigit=iNo%10;
		Product=Product*iDigit;
		iNo=iNo/10;
		ProductR(iNo);
	}
	return Product;
}

int main()
{
	int iRet=0,iValue=0;

	printf("enter the number:");
	scanf("%d",&iValue);

	iRet=ProductI(iValue);

	printf("\nProduct is:%d",iRet);

	iRet=ProductR(iValue);
	printf("\nProduct is::%d",iRet);

	return 0;
}
