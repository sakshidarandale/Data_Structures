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
        // Function Name : SumDigits
        // Input         : None
        // Output        : Prints sum of digits for each node
        // Description   : Calculates and displays the sum of digits of each element of the linked list
        // Author        : Sakshi Ravindra Darandale
        // Date         :  08/01/2026
        //
        ///////////////////////////////////////////////////////////////

        void SumDigits()
        {
            node * temp = first;
            
            int iSum = 0;
            int iDigit = 0;
            int iValue = 0;
            
            while(temp != NULL)
            {
                iValue = temp->data;
                iSum = 0;
               
                while(iValue != 0)
                {
                    iDigit = iValue % 10;
                    iValue = iValue / 10;
                    iSum = iSum + iDigit;
                }
                
                cout<<"Number : " <<temp->data<<"\n";
                cout<<"Sum of Digits is : "<<iSum <<"\n";
                
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
        // Date:            08/01/2026
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
        
    obj.InsertFirst(55);
    obj.InsertFirst(45);
    obj.InsertFirst(35);
    obj.InsertFirst(55);

    obj.SumDigits();
    
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////