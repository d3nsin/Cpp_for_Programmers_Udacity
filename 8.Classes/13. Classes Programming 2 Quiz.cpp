/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include"main2.hpp"

int main()
{
    Cat cat1;
    
    cat1.setName("Gizmo");
    cat1.setBreed("Sphynx");
    cat1.setAge(12);
    
    cat1.printInfo();
    
    return 0;
}