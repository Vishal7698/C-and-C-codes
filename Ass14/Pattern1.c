#include<stdio.h>
void Pattern(int iNo)
{
	char CCh='A';
	int i=0;
	
	for(i=1;i<=iNo;i++)
	{
		
		printf("%c\t",CCh);
		CCh++;
        }
}

int main()
{
	int iValue = 0;
	printf("Enter number of elements:");
	scanf("%d",&iValue);
	Pattern(iValue);
	return 0;
}
