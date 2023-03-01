/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int userInput[40];
    for(int i = 0; i <40; i++)
    {
        //cout<<"\nInput number "<<i+1<<"\n";
        cin>>userInput[i];
    }
    // The original array
    cout<<"\n\nThe array \n";
    for(int i = 0; i <40; i++)
    {
        cout<<userInput[i]<<" ";
    }
    
    // The array in reverse order
    cout<<"\n\nThe array in reverse order\n";
    for(int i = 0; i <40; i++)
    {
        cout<<userInput[39-i]<<" ";
    }

    // The sorted array - 
    for(int i=0; i<40; i++)
    {
        for(int j=0; j<39-i; j++)
        {
            if(userInput[j] > userInput[j+1])
            {
                int tmp;
                tmp = userInput[j];
                userInput[j] = userInput[j+1];
                userInput[j+1] = tmp;
            }

        }
    }    
    cout<<"\n\nThe sorted array \n";
    for(int i = 0; i <40; i++)
    {
        cout<<userInput[i]<<" ";
    }    
    return 0;
}