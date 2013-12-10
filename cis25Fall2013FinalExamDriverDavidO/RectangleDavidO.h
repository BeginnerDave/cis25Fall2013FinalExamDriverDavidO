
#ifndef RECTANGLEDAVIDO_H
#define RECTANGLEDAVIDO_H
#include "PointDavidO.h"

class RectangleDavidO {
protected:
    PointDavidO ll;
    PointDavidO ur;
public:
    RectangleDavidO(); /* default constr */
    RectangleDavidO(PointDavidO &, PointDavidO &); /* constructor*/
    RectangleDavidO(const RectangleDavidO &); /* copy constr */
    ~RectangleDavidO(); /* destructor */

    RectangleDavidO& operator=(const RectangleDavidO &);
    
    void update(PointDavidO &, PointDavidO &);

    FractionDavidO getArea(void);
	FractionDavidO getAreaDavidO(void);

    // insertion operator "cout"
    friend ostream& operator<<(ostream &, const RectangleDavidO &);

    // extraction operator "cin"
    friend istream& operator>>(istream &, RectangleDavidO &);

    bool operator==(const RectangleDavidO &) const;
    bool operator!=(const RectangleDavidO &) const;
    bool operator<=(const RectangleDavidO &) const;
    bool operator<(const RectangleDavidO &) const;
    bool operator>=(const RectangleDavidO &) const;
    bool operator>(const RectangleDavidO &) const;

};



void rectangleInit(RectangleDavidO *&);

void createTwoPoints(PointDavidO *&, PointDavidO *&);

FractionDavidO compareArea(RectangleDavidO &, RectangleDavidO &);

#endif
