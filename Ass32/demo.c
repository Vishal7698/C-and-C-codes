#include<stdio.h>
typedef unsigned int UINT;

void Disp(UINT iNo)
{
	int iDigit=0;
	while(iNo>0)
	{
		iDigit=iNo%2;
		printf("%d",iDigit);
		iNo=iNo/2;
	}
}

int main()
{
	UINT iValue=0;
	printf("enter the no");
	scanf("%d",&iValue);
	Disp(iValue);
	return 0;
}
