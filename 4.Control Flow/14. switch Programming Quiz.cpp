/*Now I would like you to do a switch statement with breaks
**between the cases. Create a program that asks the user for
**two float numbers. Then asks the user if they would like to:
**add the numbers, subtract the numbers, multiply the numbers, 
**divide the numbers.
**The program should then print the numbers with the chosen
**operation and the solution. 
*/

#include <iostream>

using namespace std;

int main()
{
    float in1, in2;
    cout<<"Enter two numbers:\n";
    cin>>in1;
    cin>>in2;
    cout<<"Enter the operation '+','-','*','/':\n";
    
    char operatorType;
    cin>>operatorType;
    
    
    switch(operatorType)
    {
        case('+'):
        {
            cout<<"\n"<<in1<<operatorType<<in2<<"="<<in1+in2<<"\n";
            break;            
        }

        case('-'):
        {
            cout<<"\n"<<in1<<operatorType<<in2<<"="<<in1-in2<<"\n";
            break;            
        }

        case('*'):
        {
            cout<<"\n"<<in1<<operatorType<<in2<<"="<<in1*in2<<"\n";
            break;            
        }

        case('/'):
        {
            cout<<"\n"<<in1<<operatorType<<in2<<"="<<in1/in2<<"\n";
            break;            
        }
        default: cout<<"\n"<<"Enter the operation '+','-','*','/':\n";

    }
    
    return 0;
}