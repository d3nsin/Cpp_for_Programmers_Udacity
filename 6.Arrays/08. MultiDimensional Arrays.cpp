/*Goal: understand multidimensional arrays in C++*/

#include<iostream>

using namespace std;

int main()
{
    const int n=2, m=3;
    
    int array2Dim[2][3] = {0,1,2,3,4,5};
    for(int i=0; i<n;i++)
        for(int j=0;j<m;j++)
            cout<<"array2Dim["<<i<<"]["<<j<<"] = " << array2Dim[i][j]<<"\n";
    return 0;
}