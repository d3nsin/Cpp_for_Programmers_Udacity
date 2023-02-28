/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    string givenString;
    char givenChar;
    
    // Get values
    cout<<"\nInput integer"<<"\n";
    cin>>givenInt;
    
    cout<<"\nInput float"<<"\n";
    cin>>givenFloat;
    
    cout<<"\nInput double"<<"\n";
    cin>>givenDouble;
    
    cout<<"\nInput char"<<"\n";
    cin>>givenChar;
    
    cout<<"\nInput string"<<"\n";
    getline(cin, givenString);
    
    // Print out each variable and its address
    cout<<"\nInput integer is "<<givenInt<<"\n";
    cout<<"\ninteger address is "<<&givenInt<<"\n";
    
    cout<<"\nInput float is "<<givenFloat<<"\n";
    cout<<"\nfloat address is "<<&givenFloat<<"\n";
    
    cout<<"\nInput double is "<<givenDouble<<"\n";
    cout<<"\ndouble address is "<<&givenDouble<<"\n";
    
    cout<<"\nInput string is "<<givenString<<"\n";
    cout<<"\nstring address is "<<&givenString<<"\n";

    cout<<"\nInput char is "<<givenChar<<"\n";
    cout<<"\nchar address is "<<&givenChar<<"\n";   
    return 0;
}
