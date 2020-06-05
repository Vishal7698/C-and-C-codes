/*5. Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
Input : A
Output : Decimal 65
Octal 0101
Hexadecimal 0X41
*/
#include<stdio.h>

void Display(char ch)
{
	printf("Decimal %d\n",ch);
	printf("octal %o\n",ch);
	printf("Hexadicimal %x\n",ch);
}

int main()
{
	char ch='\0';
	printf("enter the charachter:");
	scanf("%c",&ch);
	Display(ch);
	return 0;
}	
