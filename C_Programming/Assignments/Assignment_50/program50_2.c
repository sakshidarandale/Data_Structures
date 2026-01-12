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
// Function Name :  DisplayGreaterThanAvg
// Input:           First node of linked list
// Output:          Prints elements greater than average
// Description:     Displays all elements in the linked list whose values are greater than the average of all elements
// Author:          Sakshi Ravindra Darandale
// Date:            10/01/2026
//
////////////////////////////////////////////////////////////////////////////////

void DisplayGreaterThanAvg(PNODE first)
{
    PNODE temp = first;
    int iSum = 0;
    int iCount = 0;
    int iAvg = 0;
    
    while(temp != NULL)
    {
        iSum = iSum + temp->data;
        iCount++;
        temp = temp->next;
    }
    
    iAvg = iSum / iCount;  
    
    printf("Average is : %d\n", iAvg);
    printf("Elements greater than average are : ");
    
    temp = first;
    while(temp != NULL)
    {
        if(temp->data > iAvg)
        {
            printf("%d ", temp->data);
        }
        temp = temp->next;
    }
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
    
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);
    
    DisplayGreaterThanAvg(head);  
 
    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
