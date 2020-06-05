/*5.Write a program which accept two strings from user and concat
second string at the end of first string in reverse order.

Input : “Marvellous”
“Python”

Output : MarvellousnohtyP
*/

/*#include<stdio.h>

void StrRev(char *str1,char *str2)
{
	while(*str1!='\0')
	{
		str1++;
	}
	
	
	
	char Temp;
	char *start=str2;
	char *end=str2;
	char tm;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		Temp=*start;
		*start=*end;
		
		*end=Temp;
		
		start++;
		end--;

		
	}
	printf("::%c\n",*start);
	while((*start)!=NULL)
	{
		printf("%c",*start);
		start--;
	}
	
	*str1=*start;
	str1++;
	start++;
	while((*start)!=NULL)
	{
		printf("%c",*start);
		start--;
	}
	
}

int main()
{	
	char Arr[40];
	char Brr[40];
	
	printf("Enter the 1st string:");
	scanf("%s",Arr);
	
	printf("enter 2nd string:");
	scanf("%s",Brr);
		
	StrRev(Arr,Brr);	
	printf("%s",Arr);
	return 0;
}
*/

#include <stdio.h>

void Strcon(char *str1,char *str2)
{

char *first;
first = str2;

while(*str1 != '\0')
{
str1++;
}
printf("concat string : %c",*str1);

while(*first+1 != '\0')
{
first++;
}
printf("concat string : %c",*first);

while(first != str2)
{
*str1 = *first;
first--;
str1++;
}printf("concat string :\n %c",*str1);
printf("concat string : \n%c",*first);

*str1='\0';
}
int main()
{
char arr[20];
char brr[20];
int iValue=0;
char dum;

printf("Enter first string\t\n");
scanf("%[^'\n']s",arr);
scanf("%c",&dum);

printf("Enter second string\t\n");
scanf("%[^'\n']s",brr);
scanf("%c",&dum);

Strcon(arr,brr);
printf("concat string :\n %s",arr);
return 0;
}
