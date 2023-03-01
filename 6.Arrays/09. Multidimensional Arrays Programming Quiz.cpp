/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>

using namespace std;

int main()
{
    const int n=4;
    
    int matrix[n][n];
    int array[n], product[n];
    int sum;
    
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector

    // Input matrix of 4x4 dimension
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>matrix[i][j];
        }
    }

    // Input array of 4
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    // Calulate vector and matrix multiplication    
    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=0; j<n; j++)
        {
            sum += matrix[i][j] * array[j];
        }
        product[i] = sum;
    }

    // Print out the product 
    for(int i=0; i<n; i++)
    {
        cout<<product[i]<<" ";
    }
    
    return 0;
}