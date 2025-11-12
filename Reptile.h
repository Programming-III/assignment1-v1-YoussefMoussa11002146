using namespace std;
#include <stdlib.h>
#include <string>
#include <cmath>
#include "Animal.cpp"


#ifndef FINALSEM_REPTILE_H
#define FINALSEM_REPTILE_H

class Reptile: public Animal{
private:
    bool isvenemous;
public:
    Reptile();
    Reptile(bool i);
    ~Reptile();
};




#endif //FINALSEM_REPTILE_H
