/*3.Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.

Input : “Marvellous Multi OS”
M

Output : 0
Input : “Marvellous Multi OS”
W

Output : -1

Input : “Marvellous Multi OS”
e

Output : 4
*/
#include<stdio.h>
int FirstChar(char *str,char ch)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if(*str==ch)
		{
			return iCnt;
			break;
		}
		iCnt++;
		str++;
	}
	if(*str=='\0')
	{
		return -1;
	}
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
	iRet=FirstChar(arr,ch);
	printf("count is:%d",iRet);
	return 0;
}


