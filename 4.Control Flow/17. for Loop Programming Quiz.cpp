/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include<iostream>

using namespace std;

int main(){
    float num;
    float sum = 0;
    float avg;
    
    for(int i = 0; i < 5; i++)
    {
        cout<<"\nEnter number "<<i+1<<":"<<"\n";
        cin>>num;
        sum += num;
    }
    avg = sum / 5.0;
    cout<<"\nThe sum of 5 numbers is: "<<sum<<"\n";
    cout<<"\nThe average of 5 numbers is: "<<avg<<"\n";
    return 0;
}