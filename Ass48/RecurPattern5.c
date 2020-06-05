/*5.Write a recursive program which display below pattern.
Input : 6
Output : a b c d e f
*/

#include<stdio.h>

void DisplayI(int iNo)
{
	char ch='a';
	int i=0;

	for(i=1;i<=iNo;i++)
	{
		printf("%c\t",ch);
		ch++;
	}
}

void DisplayR(int iNo)
{
	static char ch='a';
	static int i=1;
	if( i<=iNo)
	{
		printf("\n%c\t",ch);
		ch++;
		i++;
		DisplayR(iNo);
	}
}

int main()
{
	int iValue=0;
	
	printf("ENter the number:");
	scanf("%d",&iValue);
		
	DisplayI(iValue);
	DisplayR(iValue);
	return 0;
}
