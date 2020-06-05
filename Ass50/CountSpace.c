/*1. Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD
Output : 3
*/

#include<stdio.h>

int WhiteSpaceI(char *str)
{
	int iCnt=0;

	while(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
int WhiteSpaceR(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		str++;
		WhiteSpaceR(str);
	}
	return iCnt;
}
int main()
{
	char Arr[40];
	int iRet=0;
	
	printf("Enter the number:");
	scanf("%[^'\n']%*c",Arr);

	iRet=WhiteSpaceI(Arr);

	printf("count of white spaces are:%d",iRet);

	iRet=WhiteSpaceR(Arr);
	printf("count of space::%d",iRet);

	return 0;
}
