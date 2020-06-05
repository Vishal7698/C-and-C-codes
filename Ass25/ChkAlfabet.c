/*1. Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(int ch)
{
	//char Ach='\0';
	//char aCh='\0';
	
	/*if(ch==NULL)
	{
		return -1;
	}*/
	
		if((ch>='a'&& ch<='z')||(ch>='A' && ch<='Z'))
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
	char CValue='\0';
	BOOL bRet=FALSE;

	printf("Enter the charactor:");
	scanf("%c",&CValue);
	
	bRet=ChkAlpha(CValue);

	if(bRet==TRUE)
	{
		printf("its a Alphabate:\n");
	}

	else
	{
		printf("Its not alphabate:\n");
	}
	return 0;
}
