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

// Display only Odd element
void DisplayOdd(PNODE first)
{
    while (first != NULL)
    {
        if(first -> data % 2 != 0)
        {
            printf("| %d | -> ", first->data);
        }
        
        first = first -> next;
    }
    
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

    InsertFirst(&head, 40);
    InsertFirst(&head, 51);
    InsertFirst(&head, 2);

    Display(head);

    DisplayOdd(head);

    return 0;
    
}