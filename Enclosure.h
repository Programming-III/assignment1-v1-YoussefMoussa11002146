using namespace std;
#include <stdlib.h>
#include <string>
#include <cmath>
#include "Animal.h"

#ifndef FINALSEM_ENCLOSURE_H
#define FINALSEM_ENCLOSURE_H


class Enclosure{
private:
    int capacity;
    int currentcount;
    Animal* Animals;


public:
void displayAnimals();
void addAnimal(Animal *a);
Enclosure();
Enclosure(int c,int curr, Animal a);
~Enclosure();
};


#endif //FINALSEM_ENCLOSURE_H
