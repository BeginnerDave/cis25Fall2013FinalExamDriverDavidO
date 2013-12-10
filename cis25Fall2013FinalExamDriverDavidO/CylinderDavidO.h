#ifndef CYLINDERDAVIDO_H
#define CYLINDERDAVIDO_H
#include "FractionDavidO.h"
#include "PointDavidO.h"
#include "CircleDavidO.h"

class CylinderDavidO : public CircleDavidO {
private:
    FractionDavidO height;
public:
    CylinderDavidO();
    CylinderDavidO(FractionDavidO &);
    CylinderDavidO(CircleDavidO &, FractionDavidO &);
    CylinderDavidO(PointDavidO &, FractionDavidO &, FractionDavidO &);
    ~CylinderDavidO();

    void update(PointDavidO &, FractionDavidO &, FractionDavidO &);
    void print(void);
    FractionDavidO getAreaDavidO(void);
    FractionDavidO getVolDavidO(void);

	    
	friend ostream& operator<<(ostream &, const CylinderDavidO &);
};

void cylinderInit(CylinderDavidO *&);

FractionDavidO compareCylinderArea(CircleDavidO &, CircleDavidO &);
FractionDavidO compareCylinderVol(CircleDavidO &, CircleDavidO &);
#endif


