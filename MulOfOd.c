/*Accept no from user And return multiplication of odd digits
ip:2681  ----o/p:1

ip:732 ----o/p:21

ip:2266----o/p:o

ip:1111----o/p:1
*/

#include<stdio.h>
int MulOd(int iNo)
{
	int iDigit=0;
	int iMul=0;

	if(iNo<0)    //updater
	{
		iNo=-iNo;
	}

	while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)!=0)
		{
				if(iMul==0)
				{
					iMul=iMul+1;
				}
			iMul=iMul*iDigit;
		}
		iNo=iNo/10;
	}
	return iMul;
}

int main()
{
	int iValue=0,iRet=0;
	printf("Enter the number:");
	scanf("%d",&iValue);
	iRet=MulOd(iValue);
	printf("%d",iRet);
	return 0;
}
