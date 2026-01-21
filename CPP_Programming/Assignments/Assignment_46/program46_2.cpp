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
        // Function Name : DisplayLess
        // Input         : Value to compare
        // Output        :  Displays elements smaller than given value
        // Description   : Use to display all elements in linked list smaller than specified value
        // Author        : Sakshi Ravindra Darandale
        // Date         :  06/01/2026
        //
        ///////////////////////////////////////////////////////////////

        void DisplayLess(int x)
        { 
            node * temp = first;
           
            while(temp != NULL)
            {
                if(temp->data < x)
            {
                cout<<temp->data<<"\n";
            }
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

    int iValue = 0;
    
    obj.InsertFirst(70);
    obj.InsertFirst(95);
    obj.InsertFirst(35);
    obj.InsertFirst(20);
    obj.InsertFirst(10);

    cout<<"Enter the number: \n";
    cin>>iValue;
    
    cout<<"Elements smaller than " <<iValue<< " are : \n";
    
    obj.DisplayLess(iValue);
    
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////