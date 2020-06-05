/*2. Write a program which accept string from user and count number of small characters.

Input : “Marvellous”

Output : 9
*/
#include<stdio.h>
int CountFreq(char * Str)
{
	int Count=0;
	
	if(Str==NULL)
	{
		return -1;
	}
	
	while(*Str !='\0')
	{
		if((*Str>='a')&&(*Str<='z'))
		{
			Count++;
		}
		Str++;
	}
	return Count;
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
