/*4. Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpecial(char ch)
{
	if((ch=='!')||(ch=='@')||(ch=='#')||(ch=='$')||(ch=='%')||(ch=='^')||(ch=='&')||(ch=='*'))
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
	char ch='\0';
	BOOL bRet=FALSE;
	printf("Enter the special symbol");
	scanf("%c",&ch);
	bRet=ChkSpecial(ch);
	if(bRet==TRUE)
	{
		printf("its a Special symbol");
	}
	else
	{
		printf("its not special symbol");
	}
	return 0;

}
