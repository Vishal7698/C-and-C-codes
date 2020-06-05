/*Accept no from user & return that no in two parts where 1st reverce no content only even digits & 2nd reverce content only odd digits .display that both no on screen
ip:2758  op:82 57
ip:3759  op:0  9573
ip:4682  op:2864 0
ip:2088  op:8802 0
ip:8370  op:8 73
*/

#include<stdio.h>

void RevEvenOdd(int iNo)
{
	int iDigit=0;
	int iEven=0;
	int iOdd=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iEven=iEven*10+iDigit;
		}

		else
		{
			iOdd=iOdd*10+iDigit;
		}
		iNo=iNo/10;
	}
	printf("%d\t",iEven);
	printf("%d",iOdd);
}

int main()
{
	int iValue=0;
	
	printf("Enter the no:");
	scanf("%d",&iValue);
	RevEvenOdd(iValue);
	
	return 0;
}
