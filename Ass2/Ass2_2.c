//Accept one number from user and print that number of * on screen.
#include<stdio.h>
void Display(int iNo)
{
// Write Updater
	
	while( iNo >=1 )
	{
		printf(" * ");
		iNo --;
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}
