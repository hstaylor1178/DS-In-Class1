#include<iostream>
#include<iomanip>
 
using namespace std;
 
int main()
{
    int* myPtr = new int;
        int* yourPtr;
        *myPtr = 5;
        yourPtr = myPtr;
        cout << *yourPtr << endl;
        cout << *myPtr << endl;
		
		delete yourPtr; // don't delete the pointer before you're done using it
		 
		return 0; 
}

/*
 Original:
	#include<iostream>
	#include<iomanip>
	 
	using namespace std;
	 
	int main()
	{
		int* myPtr = new int;
			int* yourPtr;
			*myPtr = 5;
			yourPtr = myPtr;
			cout << *yourPtr << endl;
			delete yourPtr;
			cout << *myPtr << endl;
			  
	}
*/
