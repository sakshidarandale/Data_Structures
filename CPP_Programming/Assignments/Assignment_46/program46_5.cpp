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
        // Function Name : IncrementAll
        // Input         : None
        // Output        : None
        // Description   : Increments the data of all nodes in the linked list by 1
        // Author        : Sakshi Ravindra Darandale
        // Date         :  06/01/2026
        //
        ///////////////////////////////////////////////////////////////

        void IncrementAll()
        { 
            node * temp = first;
           
            while(temp != NULL)
            {
                temp->data = temp->data + 1;
                temp = temp->next; 
            }
        } 
        
        /////////////////////////////////////////////////////////////////////////////////
        //
        // Function Name :  Display
        // Input:           None
        // Output:          Prints all elements of linked list
        // Description:     Displays the data of all nodes in the linked list
        // Author:          Sakshi Ravindra Darandale
        // Date:            06/01/2026
        //
        ////////////////////////////////////////////////////////////////////////////////
        void Display()
        {
            node * temp = first;
            while(temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << "\n";
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
 
    obj.InsertFirst(50);
    obj.InsertFirst(95);
    obj.InsertFirst(35);
    obj.InsertFirst(20);
    obj.InsertFirst(10);
    
    cout<<"Original list is : \n";
    obj.Display();
    
    obj.IncrementAll();
    
    cout<<"Incremented list is : \n";
    obj.Display();
    
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////