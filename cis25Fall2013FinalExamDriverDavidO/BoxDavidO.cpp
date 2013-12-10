#include <iostream>
using namespace std;
#include "BoxDavidO.h"
#include "FractionDavidO.h"
#include "RectangleDavidO.h"

FractionDavidO const six(6, 1);

BoxDavidO& BoxDavidO::operator=(const BoxDavidO &arg) {
    if (this != &arg) { // no self-assignemnet
        height = arg.height;
    }
    return *this;
}

FractionDavidO BoxDavidO::getHeight(void) {
    return height;
}

// multiply the rectangle area times 6 sides
FractionDavidO BoxDavidO::getAreaDavidO(void) {
    return FractionDavidO(six * (RectangleDavidO::getAreaDavidO()));
}

FractionDavidO BoxDavidO::getVolDavidO(void) {
    return FractionDavidO(height * (RectangleDavidO::getAreaDavidO()));
}

BoxDavidO::BoxDavidO() {
    // default constructor
}

BoxDavidO::~BoxDavidO() {
}

BoxDavidO::BoxDavidO(PointDavidO &ll, PointDavidO &ur, FractionDavidO &h)
    : RectangleDavidO(ll, ur) {
    if (height >= 0)
        height = h;
    else
        height = 0;
}

BoxDavidO::BoxDavidO(RectangleDavidO &rect, FractionDavidO &h)
    : RectangleDavidO(rect) {
    if (height >= 0)
        height = h;
    else
        height = 0;
}

void
BoxDavidO::update(PointDavidO &ll, PointDavidO & ur, FractionDavidO &h) {
    RectangleDavidO::update(ll, ur);
    if (height >= 0)
        height = h;
    else
        height = 0;
}

void BoxDavidO::print(void) {
    cout << (*this) << " Height " << height << endl;
}

void boxInit(BoxDavidO *&box) {
    PointDavidO *ptLl;
    PointDavidO *ptUr;
    FractionDavidO *height = NULL;

    pointInit(ptLl);
    pointInit(ptUr);

    cout << "Height: ";
    fractionInit(height);
    while (*height < 0) {
        cout << "Height cannot be less than zero\nHeight: ";
        fractionInit(height);
    }

    if (box) {
        box->update(*ptLl, *ptUr, *height);
    } else {
        box = new BoxDavidO(*ptLl, *ptUr, *height);
    }
    delete ptLl;
    delete ptUr;
    delete height;
}






ostream& operator<<(ostream &os, const BoxDavidO &box) {
	os << "Lower Left " << box.ll << " Upper Right " << box.ur << " Height " << box.height;
    return os;
}
