/*2. Write a recursive program which accept number from user and return
largest digit
Input : 87983
Output : 9
*/

#include<stdio.h>

int LargestNoI(int iNo)
{
	int iTemp=0,iDigit=0;

	while(iNo>0)
	{

		iDigit=iNo%10;
		
		if(iTemp<iDigit)
		{
			iTemp=iDigit;
		}
		
		iNo=iNo/10;
	}
	return iTemp;
}

int LargestNoR(int iNo)
{
	static int iDigit=0,iTemp=0;

	if(iNo>0)
	{
		iDigit=iNo%10;
		
		if(iTemp<iDigit)
		{
			iTemp=iDigit;
		}
		
		iNo=iNo/10;
		
		LargestNoR(iNo);
	}
	return iTemp;
}
		

int main()
{
	int iRet=0,iValue=0;
	
	printf("ENter the number:");
	scanf("%d",&iValue);

	iRet=LargestNoI(iValue);

	printf("\nLargest no is:%d",iRet);


	iRet=LargestNoR(iValue);
	printf("\nLargest no is::%d",iRet);
	return 0;
}
