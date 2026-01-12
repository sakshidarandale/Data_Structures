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
// Function Name :  CountNthNodes
// Input:           First node of linked list, position value
// Output:          Returns the count of nodes at nth positions
// Description:     Counts the number of nodes that appear at every nth position in the linked list
// Author:          Sakshi Ravindra Darandale
// Date:            10/01/2026
//
////////////////////////////////////////////////////////////////////////////////

int CountNthNodes(PNODE first,int ipos)
{ 
    int iCount = 0;
    int iCnt = 1;
    
    if(first == NULL)
    {
        printf("List is Empty\n");
    }

    while(first != NULL)
    {
        if(iCnt % ipos == 0)
        {
            iCount++;
        }
        first = first->next;
        iCnt++;
    }
    return iCount;
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertFirst
// Input:           Data of node
// Output:          Nothing
// Description:     Inserts a new node at the beginning of the linked list
// Author:          Sakshi Ravindra Darandale
// Date:            10/01/2026
//
////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = no;
    newn->next = NULL;
    
    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;
    int iValue = 0;
    int iRet = 0;
    
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);
    
    printf("Enter the position :");
    scanf("%d",&iValue);
    
    iRet = CountNthNodes(head,iValue);
    
    printf("Number of nodes at %dth position is : %d\n", iValue, iRet);

    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
