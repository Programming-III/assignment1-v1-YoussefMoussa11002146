#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

// I implemented the functionalities in the cpp so here they are given below however all except visitor produced errors while before i added all here they did not.
    void Animal::display() {
        cout<<name<<"("<<"Age: "<< age<<","<< "Is"<< isHungry<<")";
    }
    void Animal::feed() {
        if(isHungry ==0){
            cout<<"Not Hungry";}
        else cout<<"Hungry";
    }
    Animal::Animal() {
        name = "Default";
        age =0;
        isHungry = 0;
    }
    Animal::Animal(std::string n, int a, bool i) {
        name = n;
        age = a;
        isHungry = i;
    }
    Animal::~Animal() = default;
// in the original cpp the bird class does not give an error
    Bird::Bird() {
        wingspan = 0.0;
    }
    Bird::Bird(float wing) {
        wingspan = wing;
    }
    Bird::~Bird() = default;
// Same with enclosure
    void Enclosure::displayAnimals() {
        while(Animals != nullptr){
            cout<<Animals;
        }
    }
    void addAnimal(Animal* a){
        Animal* animal = new Animal;
    }


    Enclosure::Enclosure() {
        capacity =0;
        currentcount = 0;
        Animals = nullptr;
    }
    Enclosure::Enclosure(int c, int curr, Animal a) {
        capacity = c;
        currentcount = curr;
        Animals = &a;
    }
    Enclosure::~Enclosure() {
        delete Animals;
    }
    //Same with mammal
    Mammal::Mammal() {
        furcolor = "Default";
    }
    Mammal::Mammal(std::string f) {
        furcolor = f;
    }
    Mammal::~Mammal()  = default;
    //same with reptile
    Reptile::Reptile(){
        isvenemous = 0;
    }
    Reptile::Reptile(bool i) {
        isvenemous = i;
    }
    Reptile::~Reptile() = default;
//  Visitor cpp
        void Visitor::displayInfo() {
        cout<<"Visitor Info: "<< endl;
        cout<<"Name: "<< visitorName<<endl<<"Tickets Bought: "<<ticketsBought;
    }
    Visitor::Visitor() {
        visitorName = "Default";
        ticketsBought = 0;
    }
    Visitor::Visitor(std::string vis, int tick) {
        visitorName = vis;
        ticketsBought = tick;
    }
    Visitor::~Visitor() = default;
    // ============== MAIN FUNCTION ==============

    int main(){
Animal a1 = new Animal("Lion",5, 1);
Animal a2 = new Animal("Parrot",2, 0);
Animal a3 = new Animal("Snake",3, 1);
Enclosure *E1 = new Enclosure(5,3 , a1);
E1->addAnimal(&a2);
E1->addAnimal(&a3);
E1->displayAnimals();
Visitor *v = new Visitor("Sarah Ali", 3);
v->displayInfo();


    return 0;
}
