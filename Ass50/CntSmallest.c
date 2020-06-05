/*4. Write a recursive program which accept number from user and return
smallest digit
Input : 87983
Output : 3
*/

#include<stdio.h>

int SmallestNoI(int iNo)
{
	int iTemp=0,iDigit=0,iSmall=9;

	while(iNo>0)
	{

		iDigit=iNo%10;
		
		if(iDigit<=iSmall)
		{
			iSmall=iDigit;
		}
		
		iNo=iNo/10;
	}
	return iSmall;
}

int SmallestNoR(int iNo)
{
	static int iDigit=0,iSmall=9;

	if(iNo>0)
	{
		iDigit=iNo%10;
		
		if(iDigit<=iSmall)
		{
			iSmall=iDigit;
		}
		
		iNo=iNo/10;
		
		SmallestNoR(iNo);
	}
	return iSmall;
}
		

int main()
{
	int iRet=0,iValue=0;
	
	printf("ENter the number:");
	scanf("%d",&iValue);

	iRet=SmallestNoI(iValue);

	printf("\nLargest no is:%d",iRet);


	iRet=SmallestNoR(iValue);
	printf("\nLargest no is::%d",iRet);
	return 0;
}
