/*1. Write a program which accept string from user and copy that characters of that string into another string in reverse order.

Input : “Marvellous Python”

Output : “nohtyP suollevraM”
*/
#include<stdio.h>
void StrCopy(char *src,char *dest)
{
	char temp;
	temp=*src;
	while(*src !='\0')
	{
		src++;
	}
	src--;
	while(*dest<=temp)
	{
		*dest=*src;
		 dest++;
		 src--;
	}
	*dest='\0';
}

int main()
{
	char arr[30]="Marvellous Python";
	char brr[30];

	StrCopy(arr,brr);

	printf("%s\n",brr);
	return 0;
}
