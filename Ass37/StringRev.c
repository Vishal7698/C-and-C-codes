/*3. Write a program which accept string from user and reverse each word in place.

Input : “Marvellous Multi OS”

Output : “suollevraM itluM SO”
*/


#include<stdio.h>

void 

void StrRev(char *str)
{
	char *start=NULL;
	char *end=NULL;
	char Temp;

	start=str;
	end=str;
	
	
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
}

int main()
{
	char Arr[40];
	printf("Enter the string:");
	scanf("%[^'\n']%*c",Arr);
	StrRev(Arr);
	printf("\n%s",Arr);
	return 0;
}
