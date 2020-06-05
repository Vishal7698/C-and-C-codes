/*4.Write a program which number from user and display below pattern.

Input : 7846

Output : 
7
7 8
7 8 4
7 8 4 6
*/

#include<stdio.h>

void Pattern3(int No)
{
	int i=0,j=0,iCnt=0;
	int iDigit=0,Temp=0,iRev=0;
	Temp=No;			//No put in temp

	while(Temp>0)
	{
		iCnt++;
		iDigit=Temp%10;
		iRev=iRev*10+iDigit;	//Reverce no
		Temp=Temp/10;
	}

	for(i=1;i<=iCnt;i++)
	{	
		for(j=1,Temp=iRev;j<=iCnt;j++)
		{
			if((i==j)||(i>j))
			{
				printf("%d\t",Temp%10);
				Temp=Temp/10;
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue=0;

	printf("Enter the number:\n");
	scanf("%d",&iValue);
	Pattern3(iValue);
	return 0;
}
