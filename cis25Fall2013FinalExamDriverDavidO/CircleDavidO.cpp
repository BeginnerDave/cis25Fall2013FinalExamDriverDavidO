#include <iostream>
#include "CircleDavidO.h"
#include "PointDavidO.h"
#include "FractionDavidO.h"
#include "MenuDavidO.h"
#include "RectangleDavidO.h"

using namespace std;

FractionDavidO const PI(157/50);

FractionDavidO compareCircleArea(CircleDavidO &c1, CircleDavidO &c2){
    return FractionDavidO(c1.getR() - c2.getR());
}

void circleInit(CircleDavidO *&c1) {
    PointDavidO *center = NULL;
    FractionDavidO *radius = NULL;

    
    createCirclePoint(center);
    cout << "Radius: " << endl;
    createFraction(radius);

    while (*radius < 0) {
        cout << "Radius cannot be less than zero\nRadius: ";
        createFraction(radius);
    }
        
    if (c1)
        c1->update(*center, *radius);
    else
        c1 = new CircleDavidO(*center, *radius);        

    delete center;
    delete radius;

}

void createCirclePoint(PointDavidO *&center) {

    // x coordinate
    cout << "(";
    FractionDavidO *frX = NULL;
    createFraction(frX);
	cout << " , " << endl;
    // y coordinate   
    FractionDavidO *frY = NULL;
    createFraction(frY);
	cout << ")" << endl;

    // create point lower left
    center = new PointDavidO(*frX, *frY);

    delete frX;
    delete frY;
}
FractionDavidO CircleDavidO::getR(void) {
    return radius;
}

ostream& operator<<(ostream &os, const CircleDavidO &circle) {
    os << "Center: " << circle.center << " Radius: " << circle.radius;
    return os;
}

istream& operator>>(istream &is, CircleDavidO &circle) {
    is >> circle.center >> circle.radius;
    return is;
}

CircleDavidO::CircleDavidO() {
    // default constructor
}
CircleDavidO::CircleDavidO(PointDavidO &c, FractionDavidO &r)
    : center(c), radius(r) {
}

CircleDavidO::CircleDavidO(const CircleDavidO &old) {
    //copy constructor
    center = old.center;
    radius = old.radius;
}

CircleDavidO::~CircleDavidO() {

}

CircleDavidO& CircleDavidO::operator=(const CircleDavidO &arg) {
    center = arg.center;
    radius = arg.radius;
    return *this;
}

void CircleDavidO::update(PointDavidO &c, FractionDavidO &r) {
    center = c;
    radius = r;
}

FractionDavidO CircleDavidO::getAreaDavidO(void) {
    return FractionDavidO(PI * (radius * radius));
}




