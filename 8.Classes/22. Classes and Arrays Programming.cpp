/*Goal: practice using a class. 
**Create an array called roster, populate it 
**with multiple instances of Dog, it has a size of SIZE. 
**The create a function called 
**printRoster(roster, SIZE) that will print 
**all the information about all the dogs on the roster.
*/

#include<iostream>
#include "Dog.cpp"

using namespace std;


void printRoster(Dog roster[], int size)
{
    for(int i=0; i<size; i++)
    {
        roster[i].printInfo();
        cout<<"\n";
    }
}

int main()
{
    const int SIZE = 3;
    Dog roster[SIZE];
    //ToDo: assign the dogs to an array called roster
    //Then assign names to the Dog.
    roster[0].setName("Boogie");
    roster[0].setLicenseNumber(111);

    roster[1].setName("Bolt");
    roster[1].setLicenseNumber(222);

    roster[2].setName("Chunky");
    roster[2].setLicenseNumber(333);
    
    //ToDo: declare and define this function
    //in the header file
    printRoster(roster,SIZE);
    return 0;
}