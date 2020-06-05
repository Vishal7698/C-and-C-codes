/*3.Write a recursive program which display below pattern.
Output : 5 4 3 2 1
*/

#include<stdio.h>

void DisplayI()
{
	int i=5;

	for(i=5;i>=1;i--)
	{
		printf("%d\t",i);
	}
}

void DisplayR()
{
	static int i=5;

	if(i>=1)
	{
		printf("\n%d\t",i);
		i--;
		DisplayR();
		
	}
}

int main()
{
	DisplayI();
	DisplayR();
	return 0;
}
