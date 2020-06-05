/*4. Write a program which accept string from user and display only
digits from that string.

Input : “marve89llous121”

Output : 89121

Input : “Demo”

Output :
*/


#include<stdio.h>

void DisplayNo(char *str)
{
	int iCnt=0;
	
	
	while(*str!='\0')
	{
		if((*str>='0')&&(*str<='9'))
		{
			printf("%c",*str);
		}
		else
		{
			printf("\t");
		}
		
	//	printf("%c",*str);
		str++;
	}
	//printf("%c\n",*str);
}

int main()
{
	char ch[40];
	printf("enter the string:");
	scanf("%[^'\n']s",ch);
	DisplayNo(ch);
	return 0;
}
