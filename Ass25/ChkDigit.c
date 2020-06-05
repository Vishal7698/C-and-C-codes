/*3. Accept Character from user and check whether it is digit or not
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char iNo)
{
	if((iNo>='0') &&( iNo<='9'))
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
	char iValue='\0';
	BOOL bRet=FALSE;
	printf("Enter the number:");
	scanf("%c",&iValue);
	bRet=ChkDigit(iValue);
	if(bRet==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("false");
	}
}
