/*Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output :A B C D
	A B C D
	A B C D
	A B C D
*/

#include<stdio.h>

void Pattern1(int iRow,int iCol)
{
	int i=0,j=0;
	char cLet='A';
	
	for(i=1;i<=iRow;i++)
	{
		//printf("%c\t",cLet);
		//cLet++;
		for(j=1;j<=iCol;j++)
		{
			printf("%c\t",cLet);
			cLet++;
		}
		cLet='A';
		printf("\n");
		
	}	
	
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter number of rows and columns:");
	scanf("%d %d",&iValue1, &iValue2);
	Pattern1(iValue1, iValue2);
	return 0;
}
