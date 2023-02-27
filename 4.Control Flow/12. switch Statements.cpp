/*Goal: demonstrate use cases for the switch statement.*/

#include <iostream>

using namespace std;

int main()
{
    int menuItem = 1;
    
    cout<<"What is your favorite winter sport?: \n";
    cout<<"1.Skiing\n2: Sledding\n3: Sitting by the fire";
    cout<<"\n4.Drinking hot chocolate\n";
    cout<<"\n\n";
    
    switch(menuItem)
    {
        case(1): cout<<"Skiing?! Sounds dangerous!\n";
                 break;
        case(2): cout<<"Sledding?! Sounds like work!\n";
                 break; 
        case(3): cout<<"Sitting by the fire?! Sounds warm!\n";
                 break;
        case(4): cout<<"Hot chocolate?! Yum!\n";
                 break;
        default: cout<<"Enter a valid menu item";
    }
    
    char begin;
    cout<<"\n\nWhere do you want to begin?\n";
    cout<<"B. At the beginning?\nM. At the middle?";
    cout<<"\nE. At the end?\n\n";
    begin = 'M';  
    
    switch(begin)
    {
        case('B'): cout<<"Once upon a time there was a wolf.\n";
        case('M'): cout<<"The wolf hurt his leg.\n";
        case('E'): cout<<"The wolf lived happily everafter\n";
    }
    return 0;
}