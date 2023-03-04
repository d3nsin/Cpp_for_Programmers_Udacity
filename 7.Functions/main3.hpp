/*The header file for main.cpp*/

#include<iostream>

using namespace std;

void calculate(float inp1, float inp2, char operation, float &result);
void printEquation(float inp1, float inp2, char operation, float result);

void calculate(float inp1, float inp2, char operation, float &result)
{
    switch(operation)
    {
        case('+'): 
        {
            result = inp1 + inp2;
            break;
        }
        case('-'):
        {
            result = inp1 - inp2;
            break;
        }
        case('*'):
        {
            result = inp1 * inp2;
            break;
        }
        case('/'):
        {
            result = inp1 / inp2;
            break;
        }        
        default:  cout<<"Unknown operation\n";
    }  
}

void printEquation(float inp1, float inp2, char operation, float result)
{
    cout<<inp1<<operation<<inp2<<" = "<<result<<"\n";
}