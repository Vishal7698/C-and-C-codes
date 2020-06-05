/*1.Write a program which accept string from user and count number of
capital characters.

Input : “Marvellous Multi OS”

Output : 4
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
		if((*Str>='A')&&(*Str<='Z'))
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
