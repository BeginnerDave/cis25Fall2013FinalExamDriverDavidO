#include <iostream>

#include "RectangleDavidO.h"
#include "PointDavidO.h"
#include "FractionDavidO.h"
#include "MenuDavidO.h"
using namespace std;

RectangleDavidO& RectangleDavidO::operator=(const RectangleDavidO &arg) {
    if (this != &arg) { // no self-assignemnet
        ll = arg.ll;
        ur = arg.ur;
    }
    return *this;
}

FractionDavidO RectangleDavidO::getArea(void) {
    return FractionDavidO((ur.getX() - ll.getX()) * (ur.getY() - ll.getY()));
}

ostream& operator<<(ostream &os, const RectangleDavidO &rect) {
    os << "Lower Left " << rect.ll << " Upper Right " << rect.ur;
    return os;
}

istream& operator>>(istream &is, RectangleDavidO &rect) {
    is >> rect.ll >> rect.ur;
    return is;
}

RectangleDavidO::RectangleDavidO() {
    // default constructor
}

RectangleDavidO::RectangleDavidO(PointDavidO &ll, PointDavidO &ur)
    : ll(ll), ur(ur) {
}

RectangleDavidO::RectangleDavidO(const RectangleDavidO &arg) {
    // copy constructor
    ll = arg.ll;
    ur = arg.ur;
}

RectangleDavidO::~RectangleDavidO() {
}

void RectangleDavidO::update(PointDavidO &argL, PointDavidO &argR) {
    ll = argL;
    ur = argR;
}


FractionDavidO compareArea(RectangleDavidO &r1, RectangleDavidO &r2){
    return FractionDavidO(r1.getArea() - r2.getArea());
}

void rectangleInit(RectangleDavidO *&rec1) {
    PointDavidO *ptLl;
    PointDavidO *ptUr;

    
    createTwoPoints(ptLl, ptUr);

    if (rec1)
        rec1->update(*ptLl, *ptUr);
    else
        rec1 = new RectangleDavidO(*ptLl, *ptUr);        

    delete ptLl;
    delete ptUr;
    
}

void createTwoPoints(PointDavidO *&ptLl, PointDavidO *&ptUr) {
 

	
	FractionDavidO *temp = NULL;


    // UpperRight x coordinate
    cout << "Upper Right: " << endl;
    FractionDavidO *frXUr = NULL;
    createFraction(frXUr);

    // lower left y coordinate
    cout << " , " << endl;
    FractionDavidO *frYUr = NULL;
    createFraction(frYUr);

    // create point lower left


    // upper right x coordinate
    // check that it's greater that lower left x
    cout << "LowerLeft: " << endl;
    FractionDavidO *frXll = NULL;
    createFraction(frXll);
	
	cout << " , " << endl;


   
	if (*frXUr < *frXll) {     
		
		temp = new FractionDavidO(0,1);

		(*temp) = (*frXUr);
		(*frXUr) = (*frXll);
		(*frXll) = (*temp);

		delete temp;
    }


    // upper rigth y cooridnate
    // check that it's greater that lower left y
   
    FractionDavidO *frYll = NULL;
    createFraction(frYll);
    
  if (*frYUr < *frYll) {
      	temp = new FractionDavidO(0,1); 
	  (*temp) = (*frYUr);
		(*frYUr) = (*frYll);
		(*frYll) = (*temp);
		delete temp;
    }

  	   
  
  ptUr = new PointDavidO(*frXUr, *frYUr);  
  ptLl = new PointDavidO(*frXll, *frYll);

    delete frXll;
    delete frYll;
    delete frXUr;
    delete frYUr;
}

FractionDavidO RectangleDavidO::getAreaDavidO(void) {
    return FractionDavidO((ur.getX() - ll.getX()) * (ur.getY() - ll.getY()));
}
