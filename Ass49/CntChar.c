/*3. Write a recursive program which accept string from user and count number
of characters.
Input : Hello
Output : 5
*/

#include<stdio.h>

int CntCharI(char *str)
{
	
	
	int iCnt=0;

	while(*str!='\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

int CntCharR(char *str)
{
	static int iCnt=0;
	if(*str!='\0')
	{
		iCnt++;
		str++;
		CntCharR(str);
	}
	return iCnt;
}

int main()
{
	int iRet=0;
	char Arr[40];

	printf("Enter the string:");
	scanf("%[^'\n']%*c",Arr);

	iRet=CntCharI(Arr);

	printf("Count is%d",iRet);

	iRet=CntCharR(Arr);
	printf("count is::%d",iRet);
	return 0;
}
