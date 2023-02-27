/*Goal: understand variable assignment operators*/

#include<iostream>
#include <iomanip>

using namespace std; 

int main()
{
    int a = 0;
    cout<<"Variable"<<setw(20)<<"Operation"<<setw(20)<<"Result\n";
    cout<<"a = "<<a;
    a += 2;
    cout<<setw(20)<<"a += 2"<<setw(20)<<"a = "<<a<<"\n";

    cout<<"a = "<<a;
    a -= 4;
    cout<<setw(20)<<"a -= 4"<<setw(20)<<"a = "<<a<<"\n";
    
    int b = 3;
    cout<<"a = "<<a<<", b = "<<b;
    a *= b;
    cout<<setw(12)<<"a *= b"<<setw(20)<<"a = "<<a<<"\n";
    
    cout<<"a = "<<a<<", b = "<<b;
    a /= b;
    cout<<setw(12)<<"a /= b"<<setw(20)<<"a = "<<a<<"\n";
        
    
    return 0;
}