/*
Class Activity 
 
1.	There are syntax or logical errors in the C++ code given (a) and (b). 
Explain the reason why you are getting unexpected or negative numbers. 
Fix the error and submit the screenshot with right output and the code
 
a.
*/
 
#include<iostream>
#include<iomanip>
 
using namespace std;
 

int main()
{
    int *myListPtr = new int[9];
    int *yourListPtr;
    
    for (int i = 0; i < 9; i++) // changed from i < 10 to i < 9 to cycle through 10 times
        myListPtr[i] = i * (i + 1); // changed from i-1 to i+1
        
        //cout << myListPtr[i] << " "; 
    
    yourListPtr = myListPtr;
    
    //delete[] myListPtr; // no reason to delete myListPtr
    
    for (int i = 0; i < 9; i++)
        cout<< yourListPtr[i] << " ";
    cout << endl;
}


/*
int main()
{
    int* myListPtr = new int[10];
    int* yourListPtr;
    
    for (int i = 0; i < 10; i++)
        myListPtr[i] = i * (i - 1);
    
    yourListPtr = myListPtr;
    
    delete[] yourListPtr;
    
    for (int i = 0; i < 10; i++)
        cout<< myListPtr[1] << " ";
    cout << endl;
}
*/
