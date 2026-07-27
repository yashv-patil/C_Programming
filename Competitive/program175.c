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

// Count number less than given N
int CountLess(PNODE first, int iNo)
{
    int iCnt = 0;
    
    while (first != NULL)
    {
        if(first -> data < iNo)
        {
            iCnt++;
        }

        first = first -> next;
    }
     
    return iCnt;  
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

    InsertFirst(&head, 11);
    InsertFirst(&head, 51);
    InsertFirst(&head, 11);

    Display(head);

    iRet = CountLess(head, 51);

    printf("Total Less number than N is : %d\n", iRet);

    return 0;
    
}
