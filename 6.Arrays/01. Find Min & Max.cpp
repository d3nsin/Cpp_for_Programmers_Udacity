/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/
#include<iostream>

using namespace std;

int main(){
    
    int inputNumb;
    int minNumb = 100;
    int maxNumb = 0;
    int sumTot = 0;
    float avg;
    
    for(int i=0; i<15; i++)
    {
        cout<<"\nInput number "<<i+1<<"\n";
        cin>>inputNumb;
        
        if(inputNumb > maxNumb)
        {
            maxNumb = inputNumb;
        }
        
        if(inputNumb < minNumb)
        {
            minNumb = inputNumb;
        }
        sumTot += inputNumb;
    }
    avg = sumTot / 15.0;
    
    cout<<"Min number is "<<minNumb<<"\n";
    cout<<"Max number is "<<maxNumb<<"\n";
    cout<<"Sum of all numbers is "<<sumTot<<"\n";
    cout<<"Average of all numbers is "<<avg<<"\n";
    
    return 0;
}