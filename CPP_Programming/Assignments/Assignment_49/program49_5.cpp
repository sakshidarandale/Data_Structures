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
        
            /////////////////////////////////////////////////////////////////////////////////
        //
        // Function Name :  CountTwoDigit
        // Input:           None
        // Output:          Returns count of two-digit elements
        // Description:     Counts the number of elements in the linked list that have exactly two digits
        // Author:          Sakshi Ravindra Darandale
        // Date:            09/01/2026
        //
        ////////////////////////////////////////////////////////////////////////////////

        int CountTwoDigit()
        {
            int iCount = 0;
            int iDigit = 0;
            int iValue = 0;
            
            while(first != NULL)
            {
                iValue = first->data;
                iDigit = 0;
                
                while(iValue != 0)
                {
                    iValue = iValue / 10;
                    iDigit++;
                }
                
                if(iDigit == 2)
                {
                    iCount++;
                }
                
                first = first->next;
            }
            return iCount;
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
     
    int iRet = 0;

    obj.InsertFirst(200);
    obj.InsertFirst(14);
    obj.InsertFirst(78);
    obj.InsertFirst(10);

    iRet=obj.CountTwoDigit();
   
    cout<<"The number of two digit elements are : " <<iRet<<"\n";
    
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////