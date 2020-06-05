/*1.Write a program which accept string from user and copy the
contents of that string into another string. (Implement strcpy()
function)

Input : “Marvellous Multi OS”

Output : “Marvellous Multi OS” in another string
*/
#include<stdio.h>

void StrCopy(char *str,char *mtr)
{
	while(*str!='\0')
	{
		*mtr=*str;
		str++;
		mtr++;
	}
}

int main()
{
	char Arr[50];
	char Brr[50];
	printf("Enter the string");
	scanf("%[^'\n']s",Arr);
	StrCopy(Arr,Brr);
	printf("copyed string is:%s",Brr);
	return 0;
}
