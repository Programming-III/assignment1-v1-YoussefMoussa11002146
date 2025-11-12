using namespace std;
#include <stdlib.h>
#include <string>
#include <cmath>
#include "Animal.cpp"


#ifndef FINALSEM_BIRD_H
#define FINALSEM_BIRD_H

class Bird: public Animal{
private:
    float wingspan;
public:
    Bird();
    Bird(float wing);
    ~Bird();
};


#endif //FINALSEM_BIRD_H
