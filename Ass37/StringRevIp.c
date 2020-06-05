/*3. Write a program which accept string from user and reverse each
word in place.

Input : “Marvellous Multi OS”

Output : “suollevraM itluM SO”
*/


#include<stdio.h>

void reverse(char *str)
{
	char *start=NULL;
	char *end=NULL;
	char temp;			

	if((*str!=' ')&&(start==NULL)&&(*str!='\t'))
	{
		start=str;

		while((*str!=' ')&&(*str!='\0'))
		{
			str++;
		}
		end=str;
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

	if((*str==' ')&&(*(str+1)!=' ')&&(*(str+1)!='\0')&&(*str!='\t'))
	{
		str++;
		start=str;
	
		while((*str!=' ')&&(*str!='\0'))
		{
			str++;
		}
		end=str;
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

		if((*str==' ')&&(*(str+1)==' '))
		{
			str++;
		}


		
	}



int main()
{
char arr[50];
int count=0;
char temp;

printf("enter the string:");
scanf("%[^'\n']%*c",arr);

scanf("%c",&temp);

reverse(arr);

printf("%s",arr);


return 0;
}
