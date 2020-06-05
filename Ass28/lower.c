/*1.Write a program which accept string from user and convert it into
lower case.

Input : “Marvellous Multi OS”

Output : marvellous multi os
*/

#include<stdio.h>

void LowerStr(char *str)
{
	int iCnt=0;
	
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		//	iCnt++;
		}
		
		printf("%c",*str);
		str++;
	}
	//printf("%c\n",*str);
}

int main()
{
	char ch[40];
	printf("enter the string:");
	scanf("%[^'\n']s",ch);
	LowerStr(ch);
	return 0;
}
