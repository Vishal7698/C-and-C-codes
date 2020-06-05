/*4. Write a recursive program which accept number from user and return its
factorial.
Input : 5
Output : 120
*/

#include<stdio.h>


int FactoI(int iNo)
{
	int facto=1;
	
	int i=0;
	
	for(i=1;i<=iNo;i++)
	{
		facto=facto*i;
	}
	return facto;
}

int FactoR(int iNo)
{
	static int facto=1;

	if(iNo>=1)
	{
		facto=facto*iNo;
		iNo--;
		FactoR(iNo);
	}
	return facto;
}
int main()
{
	int iValue=0;
	int iRet=0;

	printf("ENter the number :");
	scanf("%d",&iValue);

	iRet=FactoI(iValue);
	printf("\nsum is:%d",iRet);

	iRet=FactoR(iValue);
	printf("\nSum is::%d",iRet);

	return 0;
}
