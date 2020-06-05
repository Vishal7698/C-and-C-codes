/*5. Accept string from user and check whether the string is palindrome or not	 without considering its case.

Input : “1abccBA1”
Output : TRUE
*/


#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL ChkPalendrom(char *str)
{
	char *start=str;
	char *end=str;

	if(str==NULL)
	{
		return FALSE;
	}


	while(*end!='\0')
	{
		end++;
	}

	end--;

	while(start<end)
	{
		if(((*start>='a')&&(*start<='z'))&&((*end>='A')&&(*end<='Z')))
		{
			*start=*start-32;
		}
		else if(((*start>='A')&&(*start<='Z'))&&((*end>='a')&&(*end<='z')))
		{
			*start=*start+32;
		}
		if(*start!=*end)
		{
			break;
		}
		start++;
		end--;
	}

	if(start<end)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}

}

int main()
{
	char Arr[40];
	BOOL bRet=FALSE;
	printf("Enter the string:");
	scanf("%[^'\n']%*c",Arr);

	bRet=ChkPalendrom(Arr);
	if(bRet==TRUE)
	{
		printf("string is palendrom\n");
	}
	else
	{
		printf("string is not palendrom\n");
	}
	return 0;
}
	
