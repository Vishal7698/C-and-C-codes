/*Accept no from user & return that no in reverce format reverce no should content the digit from the original no which are in between 3&7
ip:464 op:464
ip:1389 op:0
ip:7259 op:5
ip:3065 op:56
*/

#include<stdio.h>
int Chk3To7(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
		
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit>3)&&(iDigit<7))
		{
			iCnt=iCnt*10+iDigit;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue=0,iRet=0;
	printf("Enter the no:");
	scanf("%d",&iValue);
	iRet=Chk3To7(iValue);
	printf("%d",iRet);
	return 0;
}
	
