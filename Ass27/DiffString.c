/*3. Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.

Input : “MarvellouS”

Output : 6 (8-2)
*/
#include<stdio.h>
int CountFreq(char * Str)
{
	int lgcnt=0;
	int smcnt=0;
	int diff=0;
	
	if(Str==NULL)
	{
		return -1;
	}
	
	while(*Str !='\0')
	{
		if((*Str>='A')&&(*Str<='Z'))
		{
			lgcnt++;
		}

		else
		{
			if((*Str>='a')&&(*Str<='z'))
			{
				smcnt++;
			}			
		}
		Str++;
	}
	diff=smcnt-lgcnt;
	return diff;
}

int main()
{
	char Arr[40];
	int iRet=0;
	printf("enter the string:");
	scanf("%[^'\n']s",Arr);
	iRet=CountFreq(Arr);
	printf("%d\n",iRet);
	return 0;
}
