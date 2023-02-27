/*Goal: understand the switch statement in C++
**This example does not use a break statement between 
**the possibilities, which means all menu items below the selected
**one are executed. 
*/


#include<iostream>

using namespace std;

int main()
{
    char menuItem;
    cout<<"Choose your holiday package:\n";
    cout<<"L: luxury package\nS: standard package\n";
    cout<<"B: basic package ";
    
    cin>>menuItem;
    cout<<menuItem<<"\n";
    cout<<"The "<<menuItem<<" package includes:\n";
    
    switch(menuItem)
    {
        case ('L'): 
        {
            cout<<"\tSpa Day\n";
            cout<<"\tSailboat Tour\n";
        }
        case ('S'):
        {
            cout<<"\tCity Tour\n";
            cout<<"\tComplimentary Happy Hour\n";  
        }
        case ('B'):
        {
            cout<<"\tAirport Transfers\n";
            cout<<"\tComplimentary Breakfast\n"; 
            break;
        }
        default:
            cout<<"Please select the L,S,B package.\n";
    }
    return 0;
}