/*3.Write a program which accept two strings from user and check
whether both the strings are equal or not without considering its
case.

Input : “MarvelloUS”
“MARveLLous”

Output : TRUE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL StrComp(char *str1,char *str2)
{
	while((*str1!='\0')&&(*str2!='\0'))
	{
		if(*str1==*str2)
		{
			str1++;
			str2++;
		}
	
		else if(((*str1>='a')&&(*str1<='z'))&&((*str2>='A')&&(*str2<='Z')))
			{
				*str2=*str2+32;
				
			}

			else if(((*str1>='A')&&(*str1<='Z'))&&((*str2>='a')&&(*str2<='z')))
			{
				*str2=*str2-32;
			}
			else if(*str1!=*str2)
			{
				break;
			}
			str1++;
			str2++;
		
		
	}

	if((*str1=='\0')&&(*str2=='\0')&&(*str1==*str2))
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
	char Arr[40];
	char Brr[40];
	BOOL bRet=FALSE;

	printf("Enter 1st string:");
	scanf("%[^'\n']%*c",Arr);
	
	printf("Enter the 2nd string:\n");
	scanf("%[^'\n']%*c",Brr);
	bRet=StrComp(Arr,Brr);
	if(bRet==TRUE)
	{
		printf("true\n:");
	}
	else
	{
		printf("false:\n");
	}
	return 0;
}
