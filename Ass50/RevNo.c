/*5. Write a recursive program which accept number from user and return its
reverse number.
Input : 523
Output : 325
*/

#include<stdio.h>

int RevNoI(int iNo)
{
	int iDigit=0,iRev=0;

	while(iNo>0)
	{

		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	return iRev;
}

int RevNoR(int iNo)
{
	static int iDigit=0,iRev=0;

	if(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
		
		RevNoR(iNo);
	}
	return iRev;
}
		

int main()
{
	int iRet=0,iValue=0;
	
	printf("ENter the number:");
	scanf("%d",&iValue);

	iRet=RevNoI(iValue);

	printf("\nLargest no is:%d",iRet);


	iRet=RevNoR(iValue);
	printf("\nLargest no is::%d",iRet);
	return 0;
}
