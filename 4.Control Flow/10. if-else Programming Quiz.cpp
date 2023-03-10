/*Goal: practice if-else statements in C++
**Write a program to select the best pet. 
*/

#include<iostream>

using namespace std;

int main()
{
   char skin, location;
   cout<<"Would you like an animal with fur(f), feathers(t), or scales(s)?";
   cin>>skin;
   cout<<skin<<"\n";
   
   //Use if-else statements to control program flow
   if (skin == 'f')
   {
      cout<<"Get a dog"<<"\n"; 
   }
   else if (skin == 't')
   {
       cout<<"Get a bird"<<"\n";
   }
   else if (skin == 's')
   {
       cout<<"Would you like an animal that lives in water(w), land(l), or both(b)?";
       cin>>location;
       cout<<location<<"\n";
       //Use if-else statements to control program flow
       if (location == 'w')
       {
           cout<<"Get a fish"<<"\n";
       }
       else if (location == 'l')
       {
           cout<<"Get a gecko"<<"\n";
       }
       else if (location == 'b')
       {
           cout<<"Get a frog"<<"\n";
       }
       else
       {
           cout<<"Would you like an animal that lives in water(w), land(l), or both(b)?";
       }
   }
   else
   {
       cout<<"Would you like an animal with fur(f), feathers(t), or scales(s)?";
   }
   return 0;
}