/*4.Write a recursive program which display below pattern.
Output : A B C D E F
*/

#include<stdio.h>
void DisplayI()
{
	
	int i=0;
	char ch='A';
	for(i=1;i<=6;i++)
	{
		printf("%c\t",ch);
		ch++;
	}
}

void DisplayR()
{
	static int i=1;
	static char ch='A';
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


	
