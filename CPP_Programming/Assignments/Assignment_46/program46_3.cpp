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
        // Function Name : IsEmpty
        // Input         : None
        // Output        : Returns true if list is empty, false otherwise 
        // Description   : Checks whether the linked list is empty or not
        // Author        : Sakshi Ravindra Darandale
        // Date         :  06/01/2026
        //
        ///////////////////////////////////////////////////////////////

        bool IsEmpty()
        { 
            node * temp = first;
            
            if(temp == NULL)
            {
                return true; 
            }
            return false;
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

    bool bRet = false;
    
    obj.InsertFirst(70);
    obj.InsertFirst(95);
    obj.InsertFirst(35);
    obj.InsertFirst(20);
    obj.InsertFirst(10);

    bRet=obj.IsEmpty();
    
    if(bRet == true)
    {
        cout<<"List is Empty\n";
    }
    else
    {
       cout<<"List is not Empty\n";
    }
    
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////