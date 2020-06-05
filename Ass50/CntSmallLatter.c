/*3. Write a recursive program which accept string from user and count number
of small characters.
Input : HElloWOrlD
Output : 5
*/


#include<stdio.h>

int CountLatterI(char *str)
{
	int iCnt=0;

	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
			//str++;
		}
		str++;
	}
	return iCnt;
}

int CountLatterR(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		str++;
		CountLatterR(str);
	}
	return iCnt;
}
int main()
{
	int iRet=0;
	char Arr[40];

	printf("ENter string:");
	scanf("%[^'\n']%*c",Arr);

	iRet=CountLatterI(Arr);

	printf("small latters count%d:\n",iRet);
	
	CountLatterR(Arr);
	printf("small latter count is%d::\n",iRet);
	return 0;
}
