/*4. Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(int ch)
{
	
		if((ch>='a') && (ch<='z'))
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
		printf("its a Small Alphabate:\n");
	}

	else
	{
		printf("Its not small alphabate:\n");
	}
	return 0;
}
