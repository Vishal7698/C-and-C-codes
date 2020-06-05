/*1. Write a program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be accepted from user. (Implement strncat() function).
Note : If third parameter is greater than the size of second string then concat whole string after first string.

Input : “Marvellous Infosystems”
“Logic Building”
5

Output : “Marvellous Infosystems Logic”
*/

#include<stdio.h>


void StrConcat(char *Src,char *Dest,int iNo)
{
	while(*Src!='\0')
	{
		Src++;
	}

	//*Src = ' ';
	//Src++;

	if(*Src=='\0')
	{
		*Src=' ';
		Src++;
	}
		
	while((*Dest!='\0')&&(iNo!=0))
	{
		*Src=*Dest;
		Dest++;
		Src++;
		iNo--;
	}
	*Dest='\0';
}

int main()
{
	char Arr[40];//="Marvellous Infosystems";
	char Brr[40];//="Logic Building";
	int iValue=0;
	

	printf("Enter the string1:");
	scanf("%[^'\n']%*c",Arr);

	printf("Enter 2nd string:");
	scanf("%[^'\n']%*c",Brr);

	 
	
	printf("Enter number:\n");

	scanf(" %d",&iValue);


	
	StrConcat(Arr,Brr,iValue);
	printf("%s",Arr);
	return 0;
}
	
