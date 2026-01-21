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
        // Function Name : CountDigits
        // Input         : None
        // Output        : Prints number of digits for each node
        // Description   : Counts and displays the number of digits in each element of the linked list
        // Author        : Sakshi Ravindra Darandale
        // Date         :  08/01/2026
        //
        ///////////////////////////////////////////////////////////////

        void CountDigits()
        {
            node * temp = first;
            
            int iDigitCount = 0;
            int iValue = 0;
            
            while(temp != NULL)
            {
                iValue = temp->data;
                iDigitCount = 0;
                
                if(iValue == 0)
                {
                    iDigitCount = 1;
                }
                else
                {
                    while(iValue != 0)
                    {
                        iDigitCount++;
                        iValue = iValue / 10;
                    }
                }
                
                cout << "Number : " << temp->data<<"\n";
                cout << " Digit count : " << iDigitCount << "\n";
                   
                
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
        
    obj.InsertFirst(430);
    obj.InsertFirst(5500);
    obj.InsertFirst(250);
    obj.InsertFirst(10);

    obj.CountDigits();
    
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////