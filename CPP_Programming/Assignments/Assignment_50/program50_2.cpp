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
        
        //////////////////////////////////////////////////////////////////////////
        //
        // Function Name :  DisplayGreaterThanAvg
        // Input:           None
        // Output:          Prints elements greater than average
        // Description:     Displays all elements in the linked list whose values are greater than the average of all elements
        // Author:          Sakshi Ravindra Darandale
        // Date:            09/01/2026
        //
        ////////////////////////////////////////////////////////////////////////////////

        void DisplayGreaterThanAvg()
        {
            node * temp = first;
            int iSum = 0;
            int iCount = 0;
            int iAvg = 0;
            
            while(temp != NULL)
            {
                iSum = iSum + temp->data;
                iCount++;
                temp = temp->next;
            }
            
            iAvg = iSum / iCount;  
              
            cout<<"Average is : " <<iAvg<<"\n";
            cout<<"Elements greater than average are : \n";
            
            temp = first;
            while(temp != NULL)
            {
                if(temp->data > iAvg)
                {
                    cout<<temp->data<<"\t";
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
         
    obj.InsertFirst(50);
    obj.InsertFirst(40);
    obj.InsertFirst(30);
    obj.InsertFirst(20);
    obj.InsertFirst(10);

    obj.DisplayGreaterThanAvg();
   
    return 0;
    
}
////////////////////////////////////////////////////////////////
//
//  End of main function 
//
////////////////////////////////////////////////////////////////