#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Node
{
	int Data;
	struct Node *Next;
};

	typedef struct Node NODE;
	typedef struct Node *PNODE;
	typedef struct Node **PPNODE;


//declaration of functions 

void InsertFirst(PPNODE,int);
void Display(PNODE);
int Freq(PNODE,int);


//Insert first at possition 1st in linked list
void InsertFirst(PPNODE First, int No)
{
	PNODE newN=NULL;
	
	newN=(PNODE)malloc(sizeof(NODE));
	
	newN->Data=No;
	newN->Next=NULL;

	if(*First==NULL)
	{
		*First=newN;
	}
	else
	{
		newN->Next=*First;
		*First=newN;
	}
}

int Freq(PNODE First,int No)
{
	int iCnt=0;
	while(First!=NULL)
	{
		if(First->Data==No)
		{
			iCnt++;
		}
		First=First->Next;
	}
	return iCnt;
}

//Display The the Node in linklist
void Display(PNODE First)
{
	while(First!=NULL)
	{
		printf("%d\t",First->Data);
		First=First->Next;
	}
}

int main()
{
	PNODE Head=NULL;
	int iRet=0;
	InsertFirst(&Head,21);
	InsertFirst(&Head,100);
	InsertFirst(&Head,50);
	InsertFirst(&Head,21);
	InsertFirst(&Head,11);
	InsertFirst(&Head,21);
	
	
	iRet=Freq(Head,21);
	printf("equance of 21 number is:%d\n",iRet);
	return 0;
}
