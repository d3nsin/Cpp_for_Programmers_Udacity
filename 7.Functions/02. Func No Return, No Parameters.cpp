/*Goal: practice functions that do not return
**a value and do not accept parameters
*/

#include<iostream>

using namespace std;

void printMessage(); //note, this is placed BEFORE main()

int main()
{
    printMessage();
    return 0;
}

//note, the definition is conventionally placed after main
void printMessage() 
{
    cout<<"HEY! I'm from a function!";
}