#ifndef CIRCLEDAVIDO_H
#define CIRCLEDAVIDO_H

#include "FractionDavidO.h"
#include "PointDavidO.h"

class CircleDavidO {
protected:
    PointDavidO center;
    FractionDavidO radius; // no negative value allowed
public:
    CircleDavidO();
    CircleDavidO(PointDavidO &, FractionDavidO &);
    CircleDavidO(const CircleDavidO &);
    ~CircleDavidO();

    CircleDavidO& operator=(const CircleDavidO &);

    FractionDavidO getR(void);	  
	FractionDavidO getAreaDavidO(void);
    
	void update(PointDavidO &, FractionDavidO &);
    
    friend ostream& operator<<(ostream &, const CircleDavidO &);
    friend istream& operator>>(istream &, CircleDavidO &);

};

void circleInit(CircleDavidO *&);

void createCirclePoint(PointDavidO *&);

FractionDavidO compareCircleArea(CircleDavidO &, CircleDavidO &);

#endif





