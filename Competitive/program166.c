#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

// Search the element check
bool Search(PNODE first, int iNo)
{
    while (first != NULL)
    {
        if(first -> data == iNo)
        {
            return true;
        }
        first = first -> next;
    }

    return false;
 
}

void Display(PNODE first)
{

    while (first != NULL)
    {
        printf("| %d | -> ", first->data);
        first = first -> next;
    }
    printf("NULL\n");
    
}

void InsertFirst(PPNODE first, int iNO)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNO;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;

    }
}
int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);

    iRet = Search(head, 51);

    if(iRet == true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    return 0;
    
}