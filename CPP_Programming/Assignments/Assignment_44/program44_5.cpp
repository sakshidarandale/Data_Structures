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
        // Function Name : DisplayEven
        // Input         : None
        // Output        : Displays even elements
        // Description   : Use to display all even elements from linked list
        // Author:       : Sakshi Ravindra Darandale
        // Date:         :  06/01/2026
        //
        ///////////////////////////////////////////////////////////////

        void DisplayEven()
        { 
            node * temp=first;
            
            while(temp != NULL)
            {
                if(temp->data % 2 == 0)
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

    obj.InsertFirst(35);
    obj.InsertFirst(95);
    obj.InsertFirst(46);
    obj.InsertFirst(20);
    obj.InsertFirst(10);

    cout<<"Even elements are : \n";
   
    obj.DisplayEven();

    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////