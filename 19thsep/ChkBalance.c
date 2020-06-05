/*Accept no from user and check weather that no is balanced or not

i/p:5278  op:true 
ip:111    op:false
ip:2222   op:false
balance no is such a number which frequency of even is same as odd no
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL BalancedNo(int iNo)
{
	int iDigit=0;
	int iEven=0;
	int Odd=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	while(iNo>0)
	{	
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iEven++;
		} 
		else
		{
			Odd++;
		}

		iNo=iNo/10;
	}

	if(iEven==Odd)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	printf("Enter the numbr:");
	scanf("%d",&iValue);
	bRet=BalancedNo(iValue);
	
	if(bRet==TRUE)
	{
		printf("its a balance number:\n");
	}
	else
	{
		printf("NOT balance number:\n");		
	}
	return 0;
}
