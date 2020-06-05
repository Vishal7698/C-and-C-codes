/*Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d
*/
#include <stdio.h>

void DispalyConvert(int cValue)
{
//if((cValue>='A')&&(cValue<='Z'))
if(cValue<90)
{
cValue = cValue + 32;
printf("LOWER Case:%c \n",cValue);
}
//else if((cValue>='a')&&(cValue<='z'))
else if(cValue>90)
{
cValue = cValue - 32;
printf("Upper case:%c \n",cValue);
}
} 
int main()
{
char CValue='\0';
printf("Enter character\t");
scanf("%c",&CValue);
DispalyConvert(CValue);
return 0;
}
