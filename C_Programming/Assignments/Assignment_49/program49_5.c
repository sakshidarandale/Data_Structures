#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)
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
// Function Name :  CountTwoDigit
// Input:           First node of linked list
// Output:          Returns count of two-digit elements
// Description:     Counts the number of elements in the linked list that have exactly two digits
// Author:          Sakshi Ravindra Darandale
// Date:            10/01/2026
//
////////////////////////////////////////////////////////////////////////////////

int CountTwoDigit(PNODE first)
{
    int iCount = 0;
    int iDigit = 0;
    int iValue=0;
    
    while(first != NULL)
    {
        iValue = first->data;
        iDigit = 0;
        
        while(iValue != 0)
        {
            iValue = iValue / 10;
            iDigit++;
        }
        
        if(iDigit == 2)
        {
            iCount++;
        }
        
        first = first->next;
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
    int iRet = 0;
    
    InsertFirst(&head,200);
    InsertFirst(&head,14);
    InsertFirst(&head,78);
    InsertFirst(&head,10);
    
    iRet = CountTwoDigit(head);
    
    printf("The number of two digits elements are : %d\n", iRet);  // Output: 3
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
