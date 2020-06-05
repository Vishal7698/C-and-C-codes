/*1.Write a program which accept string from user count number of
words from string

Input : “Marvellous Multi OS”

Output : 3

Input : “ Marvellous Multi OS Pune”

Output : 4
*/

#include<stdio.h>

int CountWord(char *str)
{
	int iCnt1=1;
	int iCnt2=0;

	/*if(*str==NULL)
	{
		return -1;
	while((*end!=' ')&&(*end!='\0'))
			{
				end++;
				str++;
			}
			str++;
	}
	*/

	while(*str!='\0')
	{	
		if(*str==' ')
		{
			while((*str!=' ')&&(*str!='\0'))
			{
				str++;
				
			}
			iCnt1++;
		}
		
		str++;
		
	}
	return iCnt1;
}

int main()
{
	char Arr[40];
	int iRet=0;
	printf("Enter the string:");
	scanf("%[^'\n'%*c]",Arr);
	iRet=CountWord(Arr);
	printf("number of words are:%d\n",iRet);
	return 0;
}
