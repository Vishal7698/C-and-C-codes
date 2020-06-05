/*2. Write a program which 2 strings from user and check whether
contents of two strings are equal or not. (Implement strcmp()
function).

Input : “Marvellous Infosystems”
“Marvellous Infosystems”

Output : TRUE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL StrCompare(char *Src,char *Dest)
{
	if((Src==NULL)&&(Dest==NULL))
	{
		return FALSE;
	}

	while((*Src !='\0')&&(*Dest!='\0'))
	{
		if(*Src!=*Dest)
		{
			break;
		}
		Src++;
		Dest++;
	}
	if((*Src=='\0')&&(*Dest=='\0'))
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

	printf("Enter the 1st String:\n");
	scanf("%[^'\n']%*c",Arr);

	printf("Enter the 2nd String:\n");
	scanf("%[^'\n']%*c",Brr);

	bRet=StrCompare(Arr,Brr);
	
	if(bRet==TRUE)
	{
		printf("Both string are equal\n");
	}
	else 
	{
		printf("String are not equal");
	}
	return 0;
}
		
