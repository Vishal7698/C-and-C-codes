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
int Count(PNODE);
void InsertLast(PPNODE,int);

//Dfination of Function
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
//Display The the Node in linklist
void Display(PNODE First)
{
	while(First!=NULL)
	{
		printf("%d\t",First->Data);
		First=First->Next;
	}
}

//count the Node in Link list
int Count(PNODE First)
{
	int iCnt=0;
	while(First!=NULL)
	{
		iCnt++;
		First=First->Next;
	}
	return iCnt;
}

//Insert at last possition inlinklist
void InsertLast(PPNODE First,int No)
{
	PNODE newN=NULL;
	PNODE Temp=NULL;
	newN=(PNODE)malloc(sizeof(NODE));

	newN->Data=No;
	newN->Next=NULL;
	
	
	if(*First==NULL)
	{
		*First=newN;
	}
	else
	{
		Temp=*First;
		while(Temp->Next !=NULL)
		{
			Temp=Temp->Next;
		}
		Temp->Next=newN;
	}
}	
		

int main()
{
	PNODE Head=NULL;
	int iRet=0;
	InsertFirst(&Head,30);
	InsertFirst(&Head,20);
	InsertFirst(&Head,10);
	Display(Head);
	iRet=Count(Head);
	printf("\nCount of Node in linked list is:%d\n",iRet);
	InsertLast(&Head,40);
	InsertLast(&Head,50);
	Display(Head);
	return 0;
}
