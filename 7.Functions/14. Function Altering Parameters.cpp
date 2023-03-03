/*The program is changed to return 
**the modified variable 'a'
*/

#include<iostream>

using namespace std;

int increment(int input);
int main()
{
    int a = 34;
    cout<<"Before the function call a = "<<a<<"\n";
    a = increment(a);
    cout<<"After the function call a = "<<a<<"\n";
    return 0;
}
int increment(int input)
{
    input++;
    cout<<"In the function call a = "<<input<<"\n";
    return input;
}