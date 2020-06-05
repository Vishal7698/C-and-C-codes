/*2. Write a program which accept string from user and return length of largest word.

Input : “Marvellous Multi OS Infosystems”

Output : 11
*/

#include<stdio.h>

int WordCount(char *str)
{
	int iTemp = 0;
	int iCount=0;

	if(str == NULL)
	{
		return -1;
	}
	
	while(*str!= '\0')
	{
		iCount++;
		if(iCount>iTemp)
		{
			iTemp=iCount;
		}
		if(*str==' ')
		{
			//str++;
			iCount=0;
		}
		str++;
	}
	return iCount;
}
		
int main()
{
	char Arr[40];
	int iRet=0;

	printf("Enter the string:");
	scanf("%[^'\n']%*c",Arr);
		
	iRet=WordCount(Arr);
	printf("\n%d",iRet);
	return 0;
}
