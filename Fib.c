#include<stdio.h>

void Fib(int iNo)
{
	int i=0,iFirst=0,iSecond=1,iTemp=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	printf("%d",iFirst);
	printf("%d",iSecond);
	
	for(i=0;i<iNo;i++)
	{

		iTemp=iFirst+iSecond;
		printf("%d",iTemp);

		iFirst=iSecond;
		iSecond=iTemp;
	}
}

int main()
{
	int iValue=0;
	printf("Enter the number");
	scanf("%d",&iValue);
	Fib(iValue);
	return 0;
}
		
