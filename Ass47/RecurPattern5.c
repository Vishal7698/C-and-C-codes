/*5.Write a recursive program which display below pattern.
Output : a b c d e f
*/

#include<stdio.h>
void DisplayI()
{
	
	int i=0;
	char ch='a';
	for(i=1;i<=6;i++)
	{
		printf("%c\t",ch);
		ch++;
	}
}

void DisplayR()
{
	 static int i=1;
	 static char ch='a';
	if(i<=6)
	{
		printf("\n%c\t\n",ch);
		ch++;
		i++;
		DisplayR();
		
	}
}

int main()
{
	
	
	DisplayI();
	DisplayR();
	return 0;
	
}


	
