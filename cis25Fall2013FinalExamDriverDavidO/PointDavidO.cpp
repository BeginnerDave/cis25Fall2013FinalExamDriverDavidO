
#include <iostream>
#include "PointDavidO.h"
#include "FractionDavidO.h"
using namespace std;

void PointDavidO::flipByX(void) {
    x = -x;
}

void PointDavidO::flipByY(void) {
    y = -y;
}

void PointDavidO::flipThroughOrigin(void) {
    x = -x;
    y = -y;
}

void PointDavidO::moveBy(const FractionDavidO &delX,
                         const FractionDavidO &delY) {
    x += delX;
    y += delY;
}

void PointDavidO::moveBy(int n) {
    x += FractionDavidO(n);
    y += FractionDavidO(n);
}

bool PointDavidO::operator==(const PointDavidO &arg) const {
    if (x == arg.x && y == arg.y)
        return true;
    else
        return false;
}

bool PointDavidO::operator!=(const PointDavidO &arg) const {
    return !(*this == arg);
}

FractionDavidO PointDavidO::getX(void) {
    return x;
}

FractionDavidO PointDavidO::getY(void) {
    return y;
}

ostream& operator<<(ostream &os, const PointDavidO &point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

istream& operator>>(istream &is, PointDavidO &point) {
    is >> point.x >> point.y;
    return is;
}

PointDavidO::PointDavidO() {
    // default constructor
}

PointDavidO::PointDavidO(FractionDavidO &x, FractionDavidO &y)
    : x(x), y(y) {
}

PointDavidO::PointDavidO(const PointDavidO &old) {
    //copy constructor
    x = old.x;
    y = old.y;
}

PointDavidO::~PointDavidO() {
}

PointDavidO& PointDavidO::operator=(const PointDavidO &arg) {
    if (this != &arg) { // no self-assignemnet
        x = arg.x;
        y = arg.y;
    }
    return *this;
}

void PointDavidO::update(FractionDavidO &argX, FractionDavidO &argY) {
    x = argX;
    y = argY;
}

void pointInit(PointDavidO *&point) {

    cout << "x: ";
    FractionDavidO *frX = NULL;
    fractionInit(frX);

    cout << "y: ";
    FractionDavidO *frY = NULL;
    fractionInit(frY);

    point = new PointDavidO(*frX, *frY);

    delete frX;
    delete frY;
}