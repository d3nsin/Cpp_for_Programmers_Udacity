/*Goal: Learn to pass variables by reference. 
**Once we learn this, we can modify variables in functions,
**and the change will be available outside the scope of the 
**modification.
*/

#include<iostream>

using namespace std;

void increment(int &input); //Note the addition of '&'

int main()
{
    int a = 34;
    cout<<"Before the function call a = "<<a<<"\n";
    increment(a);
    cout<<"After the function call a = "<<a<<"\n";
    return 0;
}
void increment(int &input)//Note the addition of '&'
{
    input++; //**Note the LACK OF THE addition of '&'**
    cout<<"In the function call a = "<<input<<"\n";
}