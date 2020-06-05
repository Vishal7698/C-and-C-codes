/*1.Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.
Input : 11
Output : 3
*/

#include<stdio.h>
typedef unsigned int UINT;



UINT OffBit(UINT iNo)
{
	UINT imask=1;
	UINT iresult=0;
	int icnt=0,i=0;
	
	for(i=1;i<32;i++)
	{
		iresult=imask & iNo;
		
		if(iresult==imask)
		{
			icnt++;
		}	
		imask=imask<<1;
		
	}

		
		
	return icnt;
	
}



int main()
{
	UINT ino;
	UINT iret;
	


	
	printf("enter the number");
	scanf("%d",&ino);



	iret=OffBit(ino);

	printf("%d",iret);
	
	
return 0;

}

