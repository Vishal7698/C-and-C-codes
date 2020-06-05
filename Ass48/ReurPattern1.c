/*1. Write a recursive program which display below pattern.
Input : 5
Output : * * * * *
*/

#include<stdio.h>
void DisplayI(int iNo)
{
	
	int i=0;
	
	for(i=1;i<=iNo;i++)
	{
		printf("*\t");
		
	}
}

/*void DisplayR(int iNo)
{
	 static int i=1;
	 static char ch='a';
	if(i<=6)
	{
		printf("\n%c\t\n",ch);
		ch++;
		i++;
		DisplayR();
		
	}
}*/

int main()
{
	int iValue=0;
	printf("Enter the number:\n");
	scanf("%d",&iValue);

	
	DisplayI(iValue);
	DisplayR(iValue);
	return 0;
	
}


	
