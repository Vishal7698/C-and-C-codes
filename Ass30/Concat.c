/*5. Write a program which 2 strings from user and concat second string
after first string. (Implement strcat() function).

Input : “Marvellous Infosystems”
“Logic Building”

Output : “Marvellous Infosystems Logic Building”
*/

#include<stdio.h>
void StrCatX(char *str, char * dest)
{

	while(*str != '\0')
	{
		str++; 
	}
	while(* dest != '\0') 
	{
		*str=*dest;
		str++;
		dest++;
	}
//*dest = '\0';
}
int main()
{
char AArr[50] = "Marvellous Infosystems";
char Brr[30] = "Logic Building";

StrCatX(AArr,Brr);

printf("%s",AArr); 
return 0;
}

