#include "main.hpp"

int main()
 {
   float FTemp = 0;
   float CTemp = 0;

   cout<< "Enter a Farenheit temperature: "<<"\n";
   cin >> FTemp;

   CTemp = (FTemp - 32.0) / (9.0/5.0);
   cout << "\n" <<FTemp << " in Farenheit = "  << CTemp << " in Celsius"<<"\n";
   return 0;
 }