/*Draw stack layout of each program separately.
1. Write a recursive program which display below pattern.
Output : * * * * *
*/


#include<stdio.h>

void DisplayI()
{
	int i=0;
	for(i=1;i<=4;i++)
	{
		printf("*\t");
		
	}
}

void DisplayR()
{
	static int i=1;
	if(i<=4)
	{
		printf("\n*\t\n");
		i++;
		DisplayR();
		
	}
}

int main()
{
	int iNo;

	DisplayI();
	DisplayR();
	return 0;
}
