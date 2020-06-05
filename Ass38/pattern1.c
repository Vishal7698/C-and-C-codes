/*1.Write a program which accept string from user and print below
pattern.

Input : “Marvellous”

Output : 
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
M a r v e l l o u s
*/

#include<stdio.h>
#include<string.h>
void Pattern1(char *inputString)
{
	int i=0,j=0,iRow=0,iCol=0,iCount=0;
	char *tempString = inputString;
	//printf("%s", inputString);

	while(*tempString!='\0')
	{
		//printf("%c",tempString[2]);
		iCount++;
		tempString++;
		
	}
	//int len=strlen(tempString);
	
	iRow=iCount;
	iCol=iCount;
	
	
	//printf("%d",iRow);

	tempString = inputString;	
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%c\t",*tempString);
			tempString++;
		}
		
		tempString = inputString;
		printf("\n");
	
	}
	
	
}

int main()
{
	char Arr[40];
	printf("enter the string:");
	scanf("%s",Arr);
	Pattern1(Arr);
	return 0;
}
