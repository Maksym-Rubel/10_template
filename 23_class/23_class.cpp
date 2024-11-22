
#include <iostream>
#include <vector>
#include "ds.h"

using namespace std;
int main()
{
    vector<Animal*> pets;
    pets.push_back(new Dog("Peess", 3));
    pets.push_back(new Cat("Murka", 2));
    pets.push_back(new Parrot("Polly", 1));
   

    Zoo myZoo;

 
    myZoo.addRandomAnimals(3);
    myZoo.showAllAnimals();
    myZoo.addAnimal();
    myZoo.showAllAnimals();
    myZoo.removeAllAnimals();
    myZoo.showAllAnimals();


}


