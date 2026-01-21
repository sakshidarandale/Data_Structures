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
        
        ///////////////////////////////////////////////////////////////////////////
        //
        // Function Name :  DisplayDivByThree
        // Input:           None
        // Output:          Prints elements divisible by 3
        // Description:     Displays all elements in the linked list that are divisible by 3
        // Author:          Sakshi Ravindra Darandale
        // Date:            09/01/2026
        //
        ////////////////////////////////////////////////////////////////////////////

        void  DisplayDivByThree()
        {
            node * temp = first;
            
            while(temp != NULL)
            {
               if(temp->data % 3 == 0)
               {
                    cout<<temp->data<<"\t";
               }
               temp=temp->next;
            
            }
            
        }
        
        ////////////////////////////////////////////////////////////////
        //
        // Function Name :  InsertFirst
        // Input:           Data of node
        // Output:          Nothing
        // Description:     Use to insert node at first position
        // Author:          Sakshi Ravindra Darandale
        // Date:            09/01/2026
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
         
    obj.InsertFirst(27);
    obj.InsertFirst(18);
    obj.InsertFirst(9);
    obj.InsertFirst(10);

    obj.DisplayDivByThree();
   
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////