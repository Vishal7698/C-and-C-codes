/*3. Write a program which accept string from user and copy capital
characters of that string into another string.

Input : “Marvellous Multi OS”

Output : “MMOS”
*/
#include<stdio.h>

void StrCpy(char *src,char *dest)
{
	while(*src!='\0')
	{
		if((*src>='A')&&(*src<='Z'))
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
