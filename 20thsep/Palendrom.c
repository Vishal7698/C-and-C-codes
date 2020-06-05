/*Accept no from user and check wether that no is palendrom or not
ip:747  op:TRUE
ip:7337 op:TRUE
ip:1531 op:FALSE
ip:8    op:TRUE
ip:7770 op:FALSE
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkPalendrom(int iNo)
{
	int iDigit=0;
	int iRev=0;
	int iTemp=0;
	if(iNo<0)
	{
		iNo=-iNo;

		if(iNo<10)
		{
			return TRUE;
		}
		
	}
	iTemp=iNo;
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	
	}
	
	if(iRev==iTemp)
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
	printf("Enter the number:");
	scanf("%d",&iValue);
	bRet=ChkPalendrom(iValue);
	if(bRet==TRUE)
	{
		printf("its a palendrom\n");
	}
	else
	{
		printf("its not palendrom");
	}
	return 0;
}
