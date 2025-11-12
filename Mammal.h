#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string>
#include <cmath>
#include "Animal.cpp"
#ifndef FINALSEM_MAMMAL_H
#define FINALSEM_MAMMAL_H

class Mammal : public Animal{
private:
    string furcolor;
public:
    Mammal();
    Mammal(string f);
    ~Mammal();
};



#endif //FINALSEM_MAMMAL_H
