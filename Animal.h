#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string>
#include <cmath>
#ifndef FINALSEM_ANIMAL_H
#define FINALSEM_ANIMAL_H



class Animal{
private:
    string name;
    int age;
    bool isHungry;

public:
    void display();
    void feed();
    Animal();
    Animal(string n, int a, bool i);
    ~Animal();
};






#endif //FINALSEM_ANIMAL_H
