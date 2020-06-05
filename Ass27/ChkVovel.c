/*4. Write a program which accept string from user and check whether
it contains vowels in it or not.

Input : “marvellous”

Output : TRUE

Input : “Demo”

Output : TRUE

Input : “xyz”

Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVovel(char * ch)
{
	int cnt=0;

	while(*ch!='\0')
	{
		if((*ch=='a')&&(*ch=='e')&&(*ch=='i')&&(*ch=='o')&&(*ch=='u'))
		{
			cnt++;
			break;
		}
		ch++;
	}
	if(cnt<=0)
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
	char ch[20];
	BOOL bRet=FALSE;
	printf("enter the string:");
	scanf("%[^'\n']s",ch);
	bRet=ChkVovel(ch);
	if(bRet==TRUE)
	{
		printf("vovel is present");
	}
	else
	{
		printf("not present vovel:");
	}
	return 0;
}

