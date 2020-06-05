/*4.Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.

Input : “Marvellous Multi OS”
M

Output : 11

Input : “Marvellous Multi OS”
W

Output : -1

Input : “Marvellous Multi OS”
e

Output : 4
*/
#include<stdio.h>
int LastChar(char *str,char ch)
{
	int iCnt=0;
	char *end=NULL;
	char *start=NULL;
	
	end=str;

	if(str==NULL)
	{
		return-1;
	}
	
	while(*end !='\0')
	{
		iCnt++;
		end++;
	}

	iCnt--;
	end--;
	while(end>=start)
	{
		if(*end==ch)
		{
			return iCnt;
			break;
		}
		else
		{
			return -1;
		}
		iCnt--;
		end--;
	}
}

int main()
{
	char Arr[50];
	char ch;
	int iRet=0;

	printf("Enter the string:");
	scanf("%[^'\n']s",Arr);

	printf("enter the character\n");
	scanf("%s",&ch);
	iRet=LastChar(Arr,ch);
	printf("%d",iRet);
	return 0;
}
