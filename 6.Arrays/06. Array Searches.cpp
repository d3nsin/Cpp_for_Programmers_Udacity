/*Goal: practice searching an array in C++
**There is an array of integers. The length of the arrays to be searched 
**varies. A user will enter an integer and the program will search the array.
**If the value is in the array, the program will return the location of 
**the element. If the value is not in the array, the user will be notified 
**that the value is not in the array. To exit the program the user will enter -1.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};
    //use searchKey for the number to be found
    //use location for the array index of the found value
    int searchKey, location, n;
    
    n = sizeof(searchArray) / sizeof(searchArray[0]);
    
    while(1)
    {
        cout<<"\nEnter your number\n\n";
        cin>>searchKey;
        
        if (searchKey == -1)
        {
            break;
        }
        
        for(int i=0; i<n; i++)
        {
            if (searchKey == searchArray[i])
            {
                location = i;
                break;
            }
        location = -1;
        }
        
        //TODO: write code to determine if integers entered by 
        //the user are in searchArray
        
        //Use these commands to give feedback to the user
        if(location != -1)
        {
            cout<<searchKey<<" is at location "<<location<<" in the array.\n";
        }
        else
        {
            cout<<searchKey<<" is not in the array.\n";
        }        
    }
    
    return 0;
}