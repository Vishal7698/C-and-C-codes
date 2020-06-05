#include<stdio.h>



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
		if(start>end)
		{
			start++;
			while(*end!=' ')
			{
				end++;
			}
		}
		WordRev(char *str);
}


void WordRev(char *str)
{
	char *start=NULL;
	char *end=NULL;
	char Temp;

	start=str;
	end=str;

	if(*end==' ')
	{
		end++;
	}
	StrRev(char *str);
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
