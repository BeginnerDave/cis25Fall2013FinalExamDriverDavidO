#include <iostream>
using namespace std;
#include "CylinderDavidO.h"
#include "CircleDavidO.h"
#include "PointDavidO.h"
#include "FractionDavidO.h"

FractionDavidO CylinderDavidO::getAreaDavidO(void) {
    return FractionDavidO((CircleDavidO::getAreaDavidO() * 2) * height);
}

FractionDavidO CylinderDavidO::getVolDavidO(void) {
    return FractionDavidO(CircleDavidO::getAreaDavidO() * height);
}

CylinderDavidO::CylinderDavidO() {
    // default constructor
}

CylinderDavidO::CylinderDavidO(PointDavidO &center,
                         FractionDavidO &r, FractionDavidO &h)
    : CircleDavidO(center, r) {
    if (height >= 0)
        height = h;
    else
        height = 0;
}

CylinderDavidO::CylinderDavidO(CircleDavidO &base, FractionDavidO &h)
    : CircleDavidO(base) {
   if (height >= 0)
        height = h;
    else
        height = 0;
}

CylinderDavidO::~CylinderDavidO() {
}

void
CylinderDavidO::update(PointDavidO &c,
                 FractionDavidO &r, FractionDavidO &h) {
    CircleDavidO::update(c, r);
    if (height >= 0)
        height = h;
    else
        height = 0;
}

void CylinderDavidO::print(void) {
    cout << (*this) << " Height " << height << endl;
}


FractionDavidO compareCylinderVol(CylinderDavidO &c1, CylinderDavidO &c2) {
    return FractionDavidO(c1.getR() - c2.getR());
}

FractionDavidO compareCylinderArea(CylinderDavidO &c1, CylinderDavidO &c2) {
    return FractionDavidO(c1.getR() - c2.getR());
}

void cylinderInit(CylinderDavidO *&cyl) {
    PointDavidO *center = NULL;
    FractionDavidO *radius = NULL;
    FractionDavidO *height = NULL;

    pointInit(center);
    cout << "Radius: ";
    fractionInit(radius);
    while (*radius < 0) {
        cout << "Radius cannot be less than zero\nRadius: ";
        fractionInit(radius);
    }

    cout << "Heigth: ";
    fractionInit(height);
    while (*height < 0) {
        cout << "Height cannot be less than zero\nHeight: ";
        fractionInit(height);
    }
        
    if (cyl)
        cyl->update(*center, *radius, *height);
    else
        cyl = new CylinderDavidO(*center, *radius, *height);        

    delete center;
    delete radius;
    delete height;
}





ostream& operator<<(ostream &os, const CylinderDavidO &cyl) {
	os << "Lower Left " << cyl.center << " Upper Right " << cyl.radius << " Height " << cyl.height;
    return os;
}
