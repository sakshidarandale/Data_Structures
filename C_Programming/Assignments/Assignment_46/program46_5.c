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
// Function Name :  IncrementAll
// Input:           First node of linked list
// Output:          Nothing
// Description:     Increments the data of all nodes in the linked list by 1
// Author:          Sakshi Ravindra Darandale
// Date:            11/01/2026
//
////////////////////////////////////////////////////////////////////////////////

void IncrementAll(PNODE first)
{
    while(first != NULL)
    {
        first->data = first->data + 1; 
        first = first->next;           
    }
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  Display
// Input:           First node of linked list
// Output:          Prints all elements of linked list
// Description:     Displays the data of all nodes in the linked list
// Author:          Sakshi Ravindra Darandale
// Date:            08/01/2026
//
////////////////////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("%d\t ", first->data);  
        first = first->next;         
    }
    printf("\n");                     
}

/////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  InsertFirst
// Input:           Data of node
// Output:          Nothing
// Description:     Inserts a new node at the beginning of the linked list
// Author:          Sakshi Ravindra Darandale
// Date:            08/01/2026
//
////////////////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, int no)
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
    int iValue = 0;


    InsertFirst(&head,50);
    InsertFirst(&head,95);
    InsertFirst(&head,35);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    printf("Original list is :\n");
    Display(head);      

    IncrementAll(head);  

    printf("Incremented list is :\n");
    Display(head);    

    return 0;
}

////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////
