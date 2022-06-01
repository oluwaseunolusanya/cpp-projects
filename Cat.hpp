/*Header file for Cat.cpp
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/
#include<iostream>
using namespace std;

class Cat{
	string name, breed;
	int age;
	public:
	    Cat();
	    void setName(string nameIn);
	    void setBreed(string breedIn);
		void setAge(int ageIn);
		void printInfo();
		string getName();
		string getBreed();
		int getAge();
};

Cat::Cat(){
	name = " ";
	breed = " ";
	age = 0;
}

void Cat::setName(string nameIn){
	name = nameIn;
}

void Cat::setBreed(string breedIn){
	breed = breedIn;
}

void Cat::setAge(int ageIn){
	age = ageIn;
}

void Cat::printInfo(){
	cout<<name<<" "<<breed<<" "<<age;
}

string Cat::getName(){
	return name;
}

string Cat::getBreed(){
	return breed;
}

int Cat::getAge(){
	return age;
}