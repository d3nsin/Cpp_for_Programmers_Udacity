/*Put your functions here. 
**The grader will use this file to check your work. 
*/

#include<iostream>

using namespace std;

void printEquation(int m1, int m2, int sum, char operation);
int sum(int m1, int m2);


void printEquation(int m1, int m2, int sum, char operation) 
{
     cout<<m1<<operation<<m2<<" = "<<sum<<"\n";
}

int sum(int m1, int m2)
{
     return m1 + m2;
}