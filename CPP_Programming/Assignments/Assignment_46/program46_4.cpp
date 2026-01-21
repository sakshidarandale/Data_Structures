#include <iostream>
using namespace std;

class node
{
    public:
        int data;
        node * next;
        
        node(int no)
        {
            data=no;
            next=NULL;
        }
};

class SinglyLLL
{
    public:
        node * first;
        int iCount;
        
        ///////////////////////////////////////////////////////////////
        // Function Name : SinglyLLL(Constructor)
        // Description   : Initializes an empty linked list
        // Input         : None
        // Output        : None
        ///////////////////////////////////////////////////////////////

        SinglyLLL()
        {
            cout<<"Linked List gets created\n";
            
            first=NULL;
            iCount=0;
        }
        
        ///////////////////////////////////////////////////////////////
        //
        // Function Name : ReplaceNegative
        // Input         : 
        // Output        : Repalced Negative numbers with 0 
        // Description   :  Use to replace negative numbers and make them zero
        // Author        : Sakshi Ravindra Darandale
        // Date         :  06/01/2026
        //
        ///////////////////////////////////////////////////////////////

        void ReplaceNegative()
        { 
            node * temp = first;
           
            while(temp != NULL)
            {
                if(temp->data < 0)
            {
                temp->data = 0;
            }
            cout<<temp->data<<"\n";
            
            temp = temp->next; 
            } 
        } 
        
        ////////////////////////////////////////////////////////////////
        //
        // Function Name :  InsertFirst
        // Input:           Data of node
        // Output:          Nothing
        // Description:     Use to insert node at first position
        // Author:          Sakshi Ravindra Darandale
        // Date:            06/01/2026
        //
        ////////////////////////////////////////////////////////////////
        
        void InsertFirst(int no)
        {
            node * newn = NULL;
            
            newn = new node(no);
            
            if(first == NULL)
            {
                first=newn;
            }
            else
            {
                newn->next = first;
                first = newn;
            
            }
            iCount++;
        }
};

////////////////////////////////////////////////////////////////
//
//  Entry point function
//
////////////////////////////////////////////////////////////////

int main()
{
    SinglyLLL obj;
 
    obj.InsertFirst(-50);
    obj.InsertFirst(-40);
    obj.InsertFirst(30);
    obj.InsertFirst(-20);
    obj.InsertFirst(10);
    
    obj.ReplaceNegative();
    
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////