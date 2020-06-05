/*2.Write a program which accept string from user and accept one
character. Return frequency of that character.

Input : “Marvellous Multi OS”
M

Output : 2

Input : “Marvellous Multi OS”
W

Output : 0
*/
#include<stdio.h>

int ChkFreq(char * str,char ch)
{	
	int count=0;
	while(*str!='\0')
	
	{
		if(*str==ch)
		{
		
			count++;
		}
		str++;
	}
	return count;
}

int main()
{
	char arr[20];
	char ch;
	int iRet=0;
	printf("Enter the string:\n");
	scanf("%[^'\n']s",arr);
	printf("enter the character:");
	scanf("%s",&ch);
	iRet=ChkFreq(arr,ch);
	printf("count is:%d",iRet);
	return 0;
}


