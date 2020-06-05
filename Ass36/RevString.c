/*4. Accept string from user and reverse the contents of that string by toggling the case.

Input : “aCBdef”
Output : “FEDcbA”
*/


#include<stdio.h>

void StrRevToggle(char *str)
{
	char Temp;
	char *start=NULL,*end=NULL;
	
	if(str==NULL)
	{
		return;
	}
	
		
	

	start=str;
	end=str;
	
	while(*end!='\0')
	{
		if((*end>='a')&&(*end<='z'))
		{
			*end=*end-32;
		}
		else if((*end>='A')&&(*end<='Z'))
		{
			*end=*end+32;
		}
		str++;
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
	StrRevToggle(Arr);
	printf("%s",Arr);
	return 0;
}
