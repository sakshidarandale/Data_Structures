#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;



int SearchLastOcc(PNODE first,int no)
{
    
    int iPos=1;
    int iLastPos=-1;
    
    while(first!=NULL)
    {
       if(first->data == no)
       {
          iLastPos=iPos;
       }
    first=first->next;
    iPos++;
    }
    return iLastPos;    
}

void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn -> data = no;
    newn -> next = NULL;
    
    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next=*first;
        *first=newn;
    }
}

int main()
{
    PNODE head=NULL;
    
    int iRet=0;
    int iNo=0;

    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    printf("Enter the element to search : ");
    scanf("%d",&iNo);
    
    iRet=SearchLastOcc(head,iNo);
    
    if(iRet==-1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Last occurrence of %d is  at position %d\n",iNo,iRet);
    }

    return 0;
}