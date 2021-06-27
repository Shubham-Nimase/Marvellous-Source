/*

LinkedList: Doubly Linear Linked list...

Functions:

1]	void InsertFirst(PPNODE Head,int value);
2]	void Dispaly(PNODE Head);
3]	int Count(PNODE Head);
4]	void InsertLast(PPNODE Head,int value);
5]	void DeleteFirst(PPNODE Head);
6]	void DeleteLast(PPNODE Head);
7]	void InsertAtPos(PPNODE Head,int value,int Pos);
8]	void DeleteAtPos(PPNODE Head,int Pos);

9]	void DisplayR(PNODE Head);
*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
	struct Node* prev;

};

typedef struct Node   NODE;
typedef struct Node*  PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE Head, int value)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));

	newn->next = NULL;
	newn->prev = NULL;
	newn->data = value;

	if (*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		(*Head)->prev = newn;
		*Head = newn;
	}

}

void Display(PNODE Head)
{
	printf("Data in the Linkedlist:");
	if (Head == NULL)
	{
		printf("SORRY!! Your LinkedList is Empty!!\n\n");
	}
	else
	{
			printf("__NULL__");
		while (Head != NULL)
		{
			printf("| %d |<=>", Head->data);
			Head = Head->next;
		}
		printf("__NULL__\n");
	}
}

int Count(PNODE Head)
{
	int iCnt = 0;

	while (Head != NULL)
	{
		iCnt++;
		Head = Head->next;
	}

	return iCnt;
}

void InsertLast(PPNODE Head, int value)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));

	newn->next = NULL;
	newn->prev = NULL;
	newn->data = value;

	PNODE temp = *Head;

	if (*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		while (temp->next!= NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
		newn->prev = temp;
	}
}

void DeleteFirst(PPNODE Head)
{
	if (*Head == NULL)
	{
		return;
	}
	else if((*Head)->next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		*Head = (*Head)->next;
		free((*Head)->prev);
		(*Head)->prev = NULL;
	}
}

void DeleteLast(PPNODE Head)
{
	PNODE temp = *Head;

	if (*Head == NULL)
	{
		return;
	}
	else if ((*Head)->next == NULL)
	{
		free (*Head);
		(*Head)= NULL;
	}
	else
	{
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}
void InsertAtPos(PPNODE Head, int value, int Pos)
{
	int size = 0;
	size = Count(*Head);
	int i = 0;

	
	if ((Pos < 1) || (Pos > size + 1))
	{
		printf("SORRY!! Invalid Position!!!\n\n");
		return;
	}
	else if (Pos == 1)
	{
		InsertFirst(Head, value);
		printf("First Node is Updated...\n\n");

	}
	else if (Pos == size + 1)
	{
		InsertLast(Head, value);
		printf("Last Node is Updated...\n\n");

	}
	else
	{
		PNODE newn = NULL;
		newn = (PNODE)malloc(sizeof(NODE));

		newn->next = NULL;
		newn->prev = NULL;
		newn->data = value;

		PNODE temp = *Head;

		for (i = 1; i < Pos - 1; i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next->prev = newn;
		temp->next = newn;
		newn->prev = temp;
		printf("Position %d Node is Updated...!!\n\n", Pos);

	}
}

void DeleteAtPos(PPNODE Head,int Pos)
{
	int size = 0;
	size = Count(*Head);
	int i = 0;


	if ((Pos < 1) || (Pos > size))
	{

		printf("SORRY!! Invalid Position!!!\n\n");
		return;
	}
	else if (Pos == 1)
	{
		DeleteFirst(Head);
		printf("First Node is Deleted!!\n\n");

	}
	else if (Pos == size)
	{
		DeleteLast(Head);
		printf("Last Node is Deleted!!\n\n");

	}
	else
	{
		PNODE temp = *Head;

		for (i = 1; i < Pos - 1; i++)
		{
			temp = temp->next;
		}
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev=temp;
		printf("Position %d Node is Deleted...!!\n\n", Pos);

	}
}

void DisplayR(PNODE Head)
{
	if(Head == NULL)
	{
		printf("SORRY!! Your LinkedList is Empty!!\n\n");
		return;
	}

	while (Head->next != NULL)
	{
		Head = Head->next;
	}
	printf("Reverse_Data in the Linkedlist:");
	printf("__NULL__<=>");

	while (Head != NULL)
	{
		printf("| %d |<=>", Head->data);
		Head = Head->prev;
	}
	printf("__NULL__\n\n");
}
int main()
{
	PNODE First = NULL;
	int no = 0;
	int iRet = 0;
	int Pos = 0;
	int Choice = 1;



	printf("\n~~~~~~~~~~~~~~~~~~~~~>> Welcome To Doubly Linear LinkedList <<~~~~~~~~~~~~~~~~~~~~~\n\n\n");

	while (Choice)	//Terminates when Choice variable contain 0;
	{
		printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");

		printf("  >>Please Enter Your Choice:- \n\n");

		printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
		printf("	1: InsertFirst \n	2: InsertLast \n	3: InsertAtPos \n	4: DeleteFirst \n	5: DeleteLast \n	6: DeleteAtPos \n");
		printf("	7: Display \n	8: Count \n	9: DisplayReverse \n	0: Exit \n");

		printf("--------------------------------------------------------------------------------\n");

		printf("\nYour Choice:	");
		scanf_s("%d", &Choice);

		switch (Choice)
		{
		case 1:
		{
			printf("Enter the First Number:	");
			scanf_s("%d", &no);
			InsertFirst(&First, no);
			printf("LinkedList is Updated...\n\n");
			break;
		}
		case 2:

			printf("Enter the Last Number:	");
			scanf_s("%d", &no);
			InsertLast(&First, no);
			printf("LinkedList is Updated...\n\n");
			break;

		case 3:

			printf("Enter the Position of Node Which you add:  ");
			scanf_s(" %d", &Pos);
			printf("Enter the Data of Node:	");
			scanf_s(" %d", &no);

			InsertAtPos(&First, no, Pos);

			break;

		case 4:

			DeleteFirst(&First);
			printf("First Node is Deleted!!\n\n");
			break;

		case 5:

			DeleteLast(&First);
			printf("Last Node is Deleted!!\n\n");
			break;

		case 6:

			printf("Which Position Node do you want to Delete?  :");
			scanf_s("%d", &Pos);
			DeleteAtPos(&First, Pos);
			break;

		case 7:

			Display(First);
			printf("\n");
			break;

		case 8:

			iRet = Count(First);
			
			printf("There is %d Node(s) avaliable in LinkedList...\n\n", iRet);
			
			if (iRet == 0)
			{
				printf("SORRY!! Your LinkedList is Empty!!\n\n");
			}
			break;
		case 9:
			DisplayR(First);
			break;

		case 0:
		
			printf("\n~~~~~~~~~~~~~~~~~~~~~~>> Thank You for Using Application <<~~~~~~~~~~~~~~~~~~~~~~\n");
			break;


		default:
			
			printf(">>Wrong Choice!!\n\n");
			break;
		}
	}
	return 0;
}

