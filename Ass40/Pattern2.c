/*2.Write a program which number from user and display below pattern.

Input : 7846

Output :
7 8 4 6
7 8 4 6
7 8 4 6
7 8 4 6
*/

#include<stdio.h>

void Pattern2(int No)
{

	int iCnt=0,i=0,j=0,iRev=0,iDigit=0;
	int Temp=No;

	while(Temp>0)
	{
		iCnt++;
		iDigit=Temp%10;
		iRev=iRev*10+iDigit;
		Temp=Temp/10;
	}
	//printf("%d\n",iRev);
	
		
	for(i=1;i<=iCnt;i++)
	{
		for(j=1,Temp=iRev;j<=iCnt;j++)
		{
			
			printf("%d\t",Temp%10);
			Temp=Temp/10;
		}
		printf("\n");
	
	}
}

int main()
{
	int iValue=0;

	printf("Enter the number:\n");
	scanf("%d",&iValue);
	Pattern2(iValue);
	return 0;
}
