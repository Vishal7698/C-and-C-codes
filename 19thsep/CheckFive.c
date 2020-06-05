/*Accept no from user and check wether that no content 5 in it or not
ip:3529 op:TRUE
ip:1249752 op:TRUE
ip:3321 op:FALSE
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckFive(int iNo)
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
		if(iDigit==5)
		{
			break;
		}
		iNo=iNo/10;
	}
	if(iDigit==5)
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
	printf("Enter the no:");
	scanf("%d",&iValue);
	bRet=CheckFive(iValue);
	if(bRet==TRUE)
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}
	return 0;
}
