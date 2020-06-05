/*Accept no from user and check weather that no is balanced or not(perform using only one counter)

i/p:5278  op:true 
ip:111    op:false
ip:2222   op:false
balance no is such a number which frequency of even is same as odd no
*/

#include<stdio.h>
typedef int BOOL
#define TRUE 1
#define FALSE 0

BOOL CheckBalanceX(int iNo)
{
	int iCnt=0;
	
	int iDigit=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}

	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iCnt++;
		}

		else
		{
			iCnt--;
		}
		iNo=iNo/10;
	}
	if(iCnt==0)
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
	int iValue=0
	BOOL bRet=FALSE;
	printf("Enter no:");
	scanf("%d",&iValue);
	bRet=CheckBalanceX(iValue);
	if(bRet==TRUE)
	{

		printf("its balance no:\n");
	}
	else
	{
		printf("its not balance no:\n");
	}
	return 0;
}
