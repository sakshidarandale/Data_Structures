/////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
/////////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  SearchFirstOcc
// Input:           First node of linked list, element to search
// Output:          Position of element
// Description:     Use to search first occurrence of element
// Author:          Sakshi Ravindra Darandale
// Date:            06/01/2026
//
////////////////////////////////////////////////////////////////////////////////

int SearchFirstOcc(PNODE first,int no)
{
    int iPos=1;
    
    while(first!=NULL)
    {
       if(first->data==no)
       {
          return iPos;
       }
       first=first->next;
       iPos++;
    }
    return -1;    
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertFirst
// Input:           Data of node
// Output:          Nothing
// Description:     Use to insert node at first position
// Author:          Sakshi Ravindra Darandale
// Date:            06/01/2026
//
////////////////////////////////////////////////////////////////////////////////
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

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

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
    
    iRet=SearchFirstOcc(head,iNo);
    
    if(iRet==-1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("First occurrence of %d is  at position %d\n",iNo,iRet);
    }

    return 0;
}
////////////////////////////////////////////////////////////////
//
//  End of main function function
//
////////////////////////////////////////////////////////////////