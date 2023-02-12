//****Incomplete****write a program which displays all elements which are perfect from single linear linked list


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements in the list are:\n");
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
    
}
void Perfect(PNODE First)
{
    int iCnt = 1, iSum = 0;
    while (First != NULL)
    {
        for(iCnt=1; iCnt<(First->data);iCnt++)
        {
            if((First->data) % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        First = First->next;
    }
    printf("%d",iSum);
    
}
int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,10);
    InsertFirst(&Head,20);
    InsertFirst(&Head,330);
    InsertFirst(&Head,40);
    InsertFirst(&Head,101);
    
    Display(Head);

    Perfect(Head);
    return 0;
}