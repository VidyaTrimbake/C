 #include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    //Step1 : Allocate the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    //Step2 : Initialise the node
    newn->data = No;
    newn->next = NULL;

    //Step3 : Check linked list is empty or not
    if(*First == NULL)
    {
        *First = newn;
    }
    else  //If linked list contaisn atleast one mode
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    //
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);
    
    return 0;
}