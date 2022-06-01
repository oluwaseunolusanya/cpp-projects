/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/
#include "Cat.hpp"

int main(){
	Cat aCat;
	aCat.setName("Dumbo");
	aCat.setBreed("Huahua");
	aCat.setAge(4);
	aCat.printInfo();
	return 0;
}