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
// Function Name :  Frequency
// Input:           First node of linked list, Number to search
// Output:          Frequency count of given number
// Description:     Use to count frequency of a specific number in linked list
// Author:          Sakshi Ravindra Darandale
// Date:            06/01/2026
//
////////////////////////////////////////////////////////////////////////////////

int Frequency(PNODE first,int no)
{ 
    int iCount = 0;
    
    while(first != NULL)
    {
        if(first->data == no)
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
// Description:     Use to insert node at first position in linked list
// Author:          Sakshi Ravindra Darandale
// Date:            06/01/2026
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
    int iNo = 0;
        
    InsertFirst(&head,30);
    InsertFirst(&head,95);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);
    
    printf("Enter the number:\n");
    scanf("%d",&iNo);
    
    iRet = Frequency(head,iNo);
    
    printf("Frequency of number is : %d\n", iRet);
    
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
