#include <iostream>
#include <stdlib.h> 

using namespace std;

// generating three random numbers and assigning the values to the parameter n1, n2, and n3
void getRandnum(int &n1, int &n2, int &n3)   // arguments passed by reference
{
    n1=rand();            //assigning random value to n1
    n2=rand();            //assigning random value to n2
    n3=rand();            //assigning random value to n3
}

    // finding the minimum number and returning to the main function.
int  findMin(int n1, int n2, int n3)
{
    if(n1<n2 && n1<n3)              //if n1 is minimum then returning n1
    return n1;
    if(n2<n3 && n2<n1)              //if n2 is minimum then returning n2
    return n2;

    return n3;                      //if n3 is minimum then returning n3
}

    // Printing out the results with the original numbers and the minimum value
void printResult(int n1, int n2, int n3, int min)
{
    cout<<"Three random numbers are: "<<n1<<" "<<n2<<" "<<n3<<endl;
    cout<<"min of these numbers is: "<<min<<endl;
}


int main()
{
    int n1,n2,n3,min;           //declaring variables
    // calling functions
    getRandnum(n1, n2, n3);
    min = findMin(n1, n2, n3);
    printResult(n1, n2, n3, min);
}