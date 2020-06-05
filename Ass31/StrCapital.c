/*3. Write a program which accept string from user and copy that
characters of that string into another string by converting all small
characters into capital case.

Input : “Marvellous Python 2”

Output : “MARVELLOUS PYTHON 2”
*/
#include<stdio.h>

void StrString (char *src, char *dest)
{
    while(*src!='\0')
    {
        if((*src>='a')&&(*src<='z'))
        {
            *src=*src-32;
        }
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
}

int main()
{
    char Arr[30]="Mrvellous Python 2";
    char Brr[30];
    StrString(Arr,Brr);
    printf("%s",Brr);
    return 0;
}
