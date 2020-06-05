/*4. Write a program which accept string from user and copy the
contents into another string by removing extra white spaces.

Input : “Marvel lous multi OS”
Output : “Marvellous multi OS”
*/
#include<stdio.h>
void SpaceRemove(char *src,char *dest)
{
	while(*src!='\0')
	{
		if(*src==' ')
		{
			src++;
		}
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
}

int main()
{
	char Arr[40];
	char Brr[40];
	printf("Enter the string:");
	scanf("%[^'\n']%*c",Arr);
	SpaceRemove(Arr,Brr);
	printf("\n%s",Brr);
	return 0;
}
