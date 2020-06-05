/*Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output :A B C D
	a b c d
	A B C D
	a b c d
*/

#include<stdio.h>
void Pattern2(int iRow,int iCol)
{
	int i=0,j=0;
	char cChara='a';
	char cCharA='A';

	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i%2)!=0)
			{
				printf("%c\t",cCharA);
				cCharA++;
			}
			else
			{
				printf("%c\t",cChara);
				cChara++;
			}
		}
		cChara='a';
		cCharA='A';
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter number of rows and columns:");
	scanf("%d %d",&iValue1, &iValue2);
	Pattern2(iValue1, iValue2);
	return 0;
}
