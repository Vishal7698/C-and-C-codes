#include<stdio.h>

void Display(int iNo,char Ch)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%c",Ch);
	}
}

int main()
{
	int iValue=0;
	char cValue;

	printf("Enter number and charactor:");
	scanf("%d %c",&iValue,&cValue);
	//printf("\nenter charactor:");
	//scanf("%c",&cValue);

	Display(iValue,cValue);
	
	return 0;
}

