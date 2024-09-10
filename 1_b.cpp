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
        //delete yourPtr;
        cout << *myPtr << endl;
          
}