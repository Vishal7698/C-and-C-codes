/*Write a program which accept number from user and count frequency of 2 in it.
Input : 2395  Input : 1018  Input : 9000   Input : 922432

Output : 1    Output : 0    Output : 0     Output : 3
*/

#include<stdio.h>
int ChkCountTwo(int iNo)
{
	int iDigit=0;
	int iCount=0;

	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==2)
 		{
			iCount=iCount+1;
		}
		iNo=iNo/10;
	}
	return iCount;
}

int main()
{
	int iValue=0,iRet=0;

	printf("Enter the number:");
	scanf("%d",&iValue);
	iRet=ChkCountTwo(iValue);
	printf("%d",iRet);
	return 0;
}
