/*1.Write a program which accept two strings from user and display
length of both the strings.

Input : “Marvellous”
“Infosystems”
Output : 10 11
*/

#include<stdio.h>
void StrLen(char *str1,char *str2)
{

	int iCount1=0;
	int iCount2=0;
	while(*str1!='\0')
	{
		iCount1++;
		

		str1++;
		
	}
	while(*str2!='\0')
	{
		iCount2++;
		str2++;
	}

	printf("%d %d",iCount1,iCount2);
}

int main()
{
	char Arr[40];
	char Brr[40];

	printf("Enter the string:");
	scanf("%[^'\n']%*c",Arr);
	printf("Enter the string:");
	scanf("%[^'\n']%*c",Brr);
	StrLen(Arr,Brr);
	return 0;
}
