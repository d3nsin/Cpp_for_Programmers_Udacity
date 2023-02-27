/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    string name1, address1, phone1;
    string name2, address2, phone2;
    
    // User1  information
    cout<<"Hello user1, what is your name?"<<"\n";
    getline(cin, name1);
    
    cout<<"What is your adress?"<<"\n";
    getline(cin, address1);
    
    cout<<"What is your phone number?"<<"\n";
    getline(cin, phone1);

    // User2 information
    cout<<"Hello user2, what is your name?"<<"\n";
    getline(cin, name2);
    
    cout<<"What is your adress?"<<"\n";
    getline(cin, address2);
    
    cout<<"What is your phone number?"<<"\n";
    getline(cin, phone2);
    
    // Print out user1 information
    cout<<name1<<"\n";
    cout<<"\t\t"<<address1<<"\n";
    cout<<"\t\t"<<phone1<<"\n";

    // Print out user2 information
    cout<<name2<<"\n";
    cout<<"\t\t"<<address2<<"\n";
    cout<<"\t\t"<<phone2<<"\n";
    
    return 0;
}