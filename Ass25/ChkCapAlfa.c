/*2. Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(int ch)
{
	
		if((ch>='A') && (ch<='Z'))
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
		printf("its a Capital Alphabate:\n");
	}

	else
	{
		printf("Its not capital alphabate:\n");
	}
	return 0;
}
