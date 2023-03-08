/*Goal: use pointers to allot memory locations
*for a class. 
*/

#include<iostream>
using namespace std;

class Dog
{
    private:
        int license;
    public:
        Dog();
        Dog(int licenseIn);
        void setLicense(int licenseIn);
        int getLicense();
        ~Dog();
};

Dog::Dog()
{
   license = 0;
}

Dog::~Dog()
{
    cout<<"\nDeleting the dog";
}
Dog::Dog(int licenseIn)
{
   license = licenseIn; 
}
void Dog::setLicense(int licenseIn)
{
    license = licenseIn;
}
int Dog::getLicense()
{
    return license;
}


int main()
{
    Dog dog1(666666);
    cout<<"Initial value: "<<dog1.getLicense()<<"\n";
    dog1.setLicense(44444);
    cout<<"Updated value: "<<dog1.getLicense()<<"\n";
    return 0;
}