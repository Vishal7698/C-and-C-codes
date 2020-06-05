/*4.Write a program which accept two strings from user and concat
alternate characters from second string at the end of first string.

Input : “Marvellous”
	“Infosystems”

Output : MarvellousIfsses
*/

#include<stdio.h>
void StrConcat(char *str1,char *str2)
{
	while(*str1!='\0')
	{
		str1++;
	}
	str1--;
	
	while(*str2!='\0')
	{
		*str1=*str2;
		str2=str2+2;
		str1++;
	}
}

int main()
{
	char Arr[40];
	char Brr[40];
	
	printf("Enter the string:");
	scanf("%s",Arr);
	
	printf("Enter the 2nd string:");
	scanf("%s",Brr);

	StrConcat(Arr,Brr);
	printf("%s",Arr);
	return 0;
}
