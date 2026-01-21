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
        
        ////////////////////////////////////////////////////////////////////////////////
        // Function Name :  SumDigit
        // Input         :  None
        // Output        :  Displays sum of digits of each element       
        // Description   :  Use to calculate and display sum of digits of each
        //                  element present in linked list
        // Author        :  Sakshi Ravindra Darandale
        // Date          :  06/01/2026
        ////////////////////////////////////////////////////////////////////////////////

        int SumDigit()
        { 
            int iSum = 0;
            int iDigit = 0;
            int iValue = 0;

            node * temp = first;
            
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
                cout << "The sum is : " << iSum<<"\n";

                temp = temp->next;
            }
            return 0;   
        }

        
        //////////////////////////////////////////////////////////////////
        //
        // Function Name :  InsertFirst
        // Input:           Data of node
        // Output:          Nothing
        // Description:     Use to insert node at first position
        // Author:          Sakshi Ravindra Darandale
        // Date:            06/01/2026
        //
        //////////////////////////////////////////////////////////////////
        
        void InsertFirst(int no)
        {
            node * newn =NULL;
            
            newn = new node(no);
            
            if(first == NULL)
            {
                first=newn;
            }
            else
            {
                newn->next=first;
                first=newn;
            
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

    obj.InsertFirst(41);
    obj.InsertFirst(32);
    obj.InsertFirst(20);
    obj.InsertFirst(11);
     
    obj.SumDigit();

    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////