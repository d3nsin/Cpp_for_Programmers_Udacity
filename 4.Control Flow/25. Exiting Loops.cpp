/*Goal: understand the break and conitnue statements*/

#include<iostream>

using namespace std;

int main()
{
    int a = 0;
    while(a < 5)
    {
        cout<<"a = "<<a<<"\n";       
        a++;
        if(a == 3)
        break;
    }
    cout<<"The first statement after the first while loop\n\n";
    
    
    while(a < 15)
    {
        a++;
        if(a == 10)
        {
            cout<<"\tWhen a=10, go back to the top of the loop";
            cout<<"\n\tThis means a=10 is skipped.\n";
            continue;
        }
        std::cout<<"After continue a = "<<a<<"\n";           
    }
    return 0;
}