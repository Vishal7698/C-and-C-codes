/*Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output : a b c d e
1 2 3 4 5
a b c d e
1 2 3 4 5
a b c d e
*/

#include<stdio.h>

void Pattern3(int iRow,int iCol)
{
	int i=0,j=0;
	char cChar='a';

	for(i=1;i<=iRow;i++)
	{
		if((i%2)==0)
		{
			for(j=1;j<=iCol;j++)
			{
				printf("%d\t",j);
			}
		}
		else
		{
			for(j=1;j<=iCol;j++)
			{
				printf("%c\t",cChar);
				cChar++;
			}
			cChar='a';
		}
		printf("\n");
	}
}

int main()
{	

	int iValue1 = 0, iValue2 = 0;
	printf("Enter rows and columns:\n");
	scanf("%d %d",&iValue1, &iValue2);
	Pattern3(iValue1, iValue2);

	return 0;
}
	

