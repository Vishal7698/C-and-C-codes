/*3. Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
Output :
*/

#include<stdio.h>
void Display(char ch)
{
	char cCount='\0';
	if((ch>='A')&&(ch<='Z'))
	{
		for(cCount=ch;cCount<='Z';cCount++)
		{
			//ch++;
			printf("%c\t",ch);
			ch++;
		}
	}
	else if((ch>='a')&&(ch<='z'))
	{
		for(cCount=ch;cCount<'z';cCount++)
		{
			//ch--;
			printf("%c\t",ch);
			ch--;
		}
		
	}
	
	
}

int main()
{
	char ch='\0';
	printf("enter character:");
	scanf("%c",&ch);
	Display(ch);
	return 0;
}
