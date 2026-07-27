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

// Display First occuracce Position
int FirstOccurence(PNODE first, int iNo)
{
    int iCnt = 1 ;

    while (first != NULL)
    {
        if(first -> data == iNo)
        {
            return iCnt;
        }
         
        iCnt++;
        first = first -> next;
    
    }
     
    return -1;
    
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

    InsertFirst(&head, 40);
    InsertFirst(&head, 51);
    InsertFirst(&head, 2);

    Display(head);

    iRet = FirstOccurence(head, 1);

    printf("First Occurance Posotion is: %d\n", iRet);

    return 0;
    
}