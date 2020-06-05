/*5. Write a program which accept string from user and display it inn
reverse order.

Input : “MarvellouS”

Output : “SuollevraM”
*/
#include<stdio.h>

void ReveString(char *str)
{
	char *start=NULL;
	char *end=NULL;
	char temp;

	start=str;
	end=start;

	while(*end !='\0')
	{
		end++;
	}
	end--;

	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
}

int main()
{
	char Arr[50];
	printf("Enter the string:");
	scanf("%[^'\n']s",Arr);
	printf("string before reverce:\t%s\n",Arr);
	ReveString(Arr);
	printf("string after reverce:\t%s\n",Arr);
	return 0;
}
