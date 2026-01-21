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
        // Output:          Returns count of elements divisible by 5
        // Description:     Counts the number of elements in the linked list that are divisible by 5
        // Author:          Sakshi Ravindra Darandale
        // Date:            09/01/2026
        //
        ////////////////////////////////////////////////////////////////////////////

        int CountDivByFive()
        {
            node * temp = first;
            
            int iCount = 0;
            while(temp != NULL)
            {
               if(temp->data % 5 == 0)
               {
                    iCount++;
               }
               temp=temp->next;
            
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
    obj.InsertFirst(100);

    iRet=obj.CountDivByFive();
   
    cout<<"The number of elements divisible by five are : " <<iRet<<"\n";
    
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////