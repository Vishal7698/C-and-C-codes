/*5. Write a program which accept string from user and replace each
occurrence of first character of each word into capital case.

Input : “marvellous infosystems by Piyush khairnar”

Output : “Marvellous Infosystems By Piyush Khairnar”
*/
#include<stdio.h>

void cntword(char *str)
{

	int flag=0;


	while(*str!='\0')
	{
		

		if((*str!=' ')&&(flag==0))
		{
			flag++;
			if((*str<='z')&&(*str>='a'))
			{
				*str=*str-32;
			}
		}

		if((*str==' ')&&(*(str+1)!=' ')&&(*(str+1)!='\0'))
		{
			str++;
			if((*str<='z')&&(*str>='a'))
			{
				*str=*str-32;
			}
		}

		str++;
	}

}

int main()
{
char arr[100];

char temp;

printf("enter the string");
scanf("%[^'\n']s",arr);

scanf("%c",&temp);

cntword(arr);

printf("%s",arr);


return 0;
}
