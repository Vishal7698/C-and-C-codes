/*3.Write a program which accept string from user and toggle the case.

Input : “Marvellous Multi OS”

Output : mARVELLOUS mULTI os
*/

#include<stdio.h>

void ToggleStr(char *str)
{
	int iCnt=0;
	
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		
		}
		else if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
		
		}
		
		printf("%c",*str);
		str++;
	}
	
}

int main()
{
	char ch[40];
	printf("enter the string:");
	scanf("%[^'\n']s",ch);
	ToggleStr(ch);
	return 0;
}
