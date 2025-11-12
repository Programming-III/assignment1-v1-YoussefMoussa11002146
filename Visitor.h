using namespace std;
#include <stdlib.h>
#include <string>
#include <cmath>


#ifndef FINALSEM_VISITOR_H
#define FINALSEM_VISITOR_H

class Visitor{
private:
    string visitorName;
    int ticketsBought;
public:
    void displayInfo();
    Visitor();
    Visitor(string vis, int tick);
    ~Visitor();
};

#endif //FINALSEM_VISITOR_H
