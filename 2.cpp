/*
2.	In the following code, both myList and yourList are dynamic arrays of the same size. 
The code initializes the array myList to certain values. 
Each element of yourList should be twice the value in the corresponding element in myList. 
However, the output of this code would show that this is not the case. 
Provide the correct code with a screenshot of the output to accomplish the desired results.
*/
 
#include <iostream>
#include <string>
#include <iomanip>
 
using namespace std;
 
int main()
{
    int *myList = new int[4]; // we only need to increment 4 times
    int *yourlist;
    
    myList[0] = 8;
    
    for (int i = 1; i < 4; i++)
    {
        myList[i] = (i + 1) * myList[i - 1];
    }
    
    // have to make a seperate array for yourlist, 
    //because it will store different values. They can't be located at the same memory address
    
    yourlist = new int[4]; 
    
    // print out myList
    for (int i = 0; i < 4; i++)
    {
        yourlist[i] =  2 * myList[i];
        cout << myList[i] << " ";
    }
    
    cout << endl; // new line
    
    // Had to split the print outs into two for loops, to change the formating 
	
    // print out your list
    for (int i = 0; i < 4; i++)
    {
        cout << yourlist[i] << " "; 
    }
    
    delete[] myList; 
    delete[] yourlist;
    
    return 0; 
}
    
/*
	Original :
	#include <iostream>
	#include <string>
	#include <iomanip>
	 
	using namespace std;
	 
	int main()
	{
		int *myList;
		int *yourlist;
		
		myList = new int[5];
		myList[0] = 8;
		
		for (int i = 1; i < 5; i++)
		{
			myList[i] = i * myList[i - 1];
		}
		
		yourlist = myList;
		for (int i = 0; i < 5; i++)
		{
			yourlist[i] = 2 * myList[i];
			cout <<myList[i] <<" "<<yourlist[i]<<endl;
			
		}
	}
*/
