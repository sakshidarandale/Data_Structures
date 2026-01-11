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
// Function Name :  LastOccur
// Input:           First node of linked list, element to search
// Output:          Position of last occurrence of element
// Description:     Use to find the last occurrence of given element in linked list
// Author:          Sakshi Ravindra Darandale
// Date:            08/01/2026
//
////////////////////////////////////////////////////////////////////////////////

int LastOccur(PNODE first,int no)
{ 
    int iPos = 1;
    int iLastPos = -1;
    
    while(first != NULL)
    {
       if(first->data == no)
       {
           iLastPos = iPos;
       }
       first = first->next;
       iPos++;
    }
    return iLastPos;   
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertFirst
// Input:           Data of node
// Output:          Nothing
// Description:     Use to insert node at first position in linked list
// Author:          Sakshi Ravindra Darandale
// Date:            08/01/2026
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
    int iRet = 0;
    int iNo;
        
    InsertFirst(&head,10);
    InsertFirst(&head,95);
    InsertFirst(&head,49);
    InsertFirst(&head,20);
    InsertFirst(&head,10);
    
    printf("Enter the element to search : ");
    scanf("%d",&iNo);
    
    iRet = LastOccur(head, iNo);
    
    if(iRet == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Last occurrence of %d is at position %d\n", iNo, iRet);
    }
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
