
#include <iostream>
using namespace std;


#define INC_ORDER 1
#define DEC_ORDER 2

class ArrayX
{
    public:
        int *Arr; 
        int iSize=0;
        bool Sorted;  //IMP

        
    ArrayX(int no);
    ~ArrayX();

    void Accept();
    void Display();

    bool CheckSorted();

    void BubbleSort();
    void BubbleSortEfficient();
    void BubbleSortEfficientX(int iOption);
   
     
};

ArrayX :: ArrayX(int no)
{
    cout<<"Inside Constructor\n";
    iSize=no;
    Arr=new int[iSize];
    Sorted = true;
}    
ArrayX :: ~ArrayX()
{
    cout<<"Inside Destructor\n";
    delete [] Arr;
}  

void ArrayX :: Accept()
{
    int iCnt =0;
    
    cout<<"Enter the elements : \n";
    
    cin>>Arr[iCnt];

    for(iCnt=1;iCnt<iSize;iCnt++)
    {
        cin>>Arr[iCnt];
        
        if(Arr[iCnt - 1] > Arr[iCnt])
        {
            Sorted = false;
        }
    }

    Sorted = CheckSorted();
}

void ArrayX :: Display()
{
    int iCnt =0;
    cout<<"Elements of the array are : \n";
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}


bool ArrayX :: CheckSorted()
{
    int i = 0;
    bool bFlag = true;

    for(i = 0; i <iSize - 1; i++)
    {
        if(Arr[i] > Arr[i+1])
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;

}

void ArrayX :: BubbleSort()
{
    int i = 0, j = 0; 
    int temp = 0;
    int Pass = 0;
    int Time = 0;

    if(Sorted == true)  //Important Filter
    {
        return;
    }

    Time =1;

    for(i = 0, Pass = 1; i < iSize - 1; i++, Pass++)   //Outer Loop
    {
        for(j = 0; j < iSize - 1 - i; j++,Time++)  //Inner Loop
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;

            }
        }

        cout<<"\nData after Pass : "<<i + 1<<"\n\n";
        Display();

    }

    cout<<"Number of passess for bubble sort : "<<Pass<<"\n";

    cout<<"Total number of iterations : "<<Time<<"\n";

    Sorted = true;
}

void ArrayX :: BubbleSortEfficient()
{
    int i = 0, j = 0; 
    int temp = 0;

    bool bFlag = false;

    // if(Sorted == true)  //Important Filter
    // {
    //     return;
    // }

    bFlag = true;

    for( i = 0; (i < iSize - 1) && (bFlag == true); i++)   //Outer Loop
    {
        bFlag = false;

        for(j = 0; j < iSize - 1 - i; j++)  //Inner Loop
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;

                bFlag = true;
            }
        }

        cout<<"\nData after Pass : "<<i + 1<<"\n\n";
        Display();

    }

    cout<<"Number of passess for bubble sort : "<<i<<"\n";   //i = Value outer for loop counter

    Sorted = true;
}

// 1 : Increasing
// 2 : Decreasing

void ArrayX :: BubbleSortEfficientX(int iOption = INC_ORDER)
{
    int i = 0, j = 0; 
    int temp = 0;

    bool bFlag = false;

    if(iOption == INC_ORDER || iOption == DEC_ORDER)
    {
        cout<<"Invalid option for sorting\n";

        cout<<"1 : Increasing\n";
        cout<<"2 : Decreasing\n";

    }

    // if(Sorted == true)  //Important Filter
    // {
    //     return;
    // }

    bFlag = true;

    if(iOption == INC_ORDER )
    {
        for( i = 0; (i < iSize - 1) && (bFlag == true); i++)   //Outer Loop
        {
            bFlag = false;

            {
                    for(j = 0; j < iSize - 1 - i; j++)  //Inner Loop
                    {
                        if(Arr[j] > Arr[j+1])
                        {
                            temp = Arr[j];
                            Arr[j] = Arr[j+1];
                            Arr[j+1] = temp;

                            bFlag = true;
                        }
                    }
        
            }

            cout<<"\nData after Pass : "<<i + 1<<"\n\n";
            Display();

        }
    } ///End of if 

    else if(iOption == DEC_ORDER)
    {
        for( i = 0; (i < iSize - 1) && (bFlag == true); i++)   //Outer Loop
        {
            bFlag = false;

            {
                for(j = 0; j < iSize - 1 - i; j++)  //Inner Loop
                {
                    if(Arr[j] > Arr[j+1])
                    {
                        temp = Arr[j];
                        Arr[j] = Arr[j+1];
                        Arr[j+1] = temp;

                        bFlag = true;
                    }
                }
            }

            cout<<"\nData after Pass : "<<i + 1<<"\n\n";
            Display();

        }
    }//End of else 
    
    cout<<"Number of passess for bubble sort : "<<i<<"\n";   //i = Value outer for loop counter

    Sorted = true;
}

int main()
{
    int iValue=0;
    
    cout<<"Enter the number of elements : \n";
    cin>>iValue;
    
    ArrayX aobj(iValue);
    
    aobj.Accept();

    cout<<"Data before Sorting\n";
    aobj.Display();

    //  1 : increasing order
    //  2 : decreasing order
    aobj.BubbleSortEfficientX(DEC_ORDER);

    cout<<"Data after Sorting\n";
    aobj.Display();

    return 0;
}