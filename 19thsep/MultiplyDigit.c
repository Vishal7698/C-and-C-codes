/*Accept no from user &return the product(multiplication)of digit
ip:750 op:35
ip:152 op:10
ip:7000 op:7
ip:153 op:15
*/

#include<stdio.h>
int ProductOfDigit(int iNo)
{
	int iDigit=0;
	int iMul=1;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit>0)
		{
			iMul=iMul*iDigit;
		}
	
		iNo=iNo/10;
	}
	return iMul;
}

int main()
{
	int iValue=0,iRet=0;
	printf("Enter the number:");
	scanf("%d",&iValue);
	iRet=ProductOfDigit(iValue);
	printf("%d",iRet);
	return 0;
}
