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
        // Function Name : DisplayPrime
        // Input         : None
        // Output        : Prints all prime numbers in the linked list
        // Description   : Traverses the linked list and displays nodes which contain prime numbers
        // Author        : Sakshi Ravindra Darandale
        // Date         :  08/01/2026
        //
        ///////////////////////////////////////////////////////////////

        void DisplayPrime()
        {
            node * temp = first;
            
            int iFrequency = 0;
            int iCnt = 0;
            
            while(temp != NULL)
            {
                iFrequency = 0;
               
                for(iCnt=2;iCnt<=temp->data/2;iCnt++)
                {
                    if(temp->data%iCnt == 0)
                    {
                        iFrequency++;
                        break;
                    }
                }
                if(iFrequency == 0 && temp->data > 1)
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
        
    obj.InsertFirst(13);
    obj.InsertFirst(11);
    obj.InsertFirst(31);
    obj.InsertFirst(10);

    cout<<"Prime numbers in the linked list are : \n";
    
    obj.DisplayPrime();
    
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function
//
////////////////////////////////////////////////////////////////