/*4. Write a program which accept string from user and copy small
characters of that string into another string.

Input : “Marvellous multi OS”

Output : “arvellous multi”
*/

#include<stdio.h>

void StrCpy(char *src,char *dest)
{
	while(*src!='\0')
	{
		if((*src>='a')&&(*src<='z'))
		{
			*dest=*src;
			dest++;
		}
		src++;
	}
	
}

int main()
{
	char arr[30] = "Marvellous Multi OS";
	char Brr[30]; 
	StrCpy(arr,Brr);
	printf("%s",Brr);
return 0;
}
