/*2.Write a program which accept string from user and convert it into
upper case.

Input : “Marvellous Multi OS”

Output : MARVELLOUS MULTI OS
*/

#include<stdio.h>

void UpperStr(char *str)
{
	int iCnt=0;
	
	
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
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
	UpperStr(ch);
	return 0;
}
