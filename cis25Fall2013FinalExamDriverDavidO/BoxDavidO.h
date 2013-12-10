#ifndef BOXDAVIDO_H
#define BOXDAVIDO_H
#include "RectangleDavidO.h"
#include "PointDavidO.h"
#include "FractionDavidO.h"

class BoxDavidO : public RectangleDavidO {
private:
    FractionDavidO height;
public:
    BoxDavidO();
    BoxDavidO(FractionDavidO &);
    BoxDavidO(RectangleDavidO &, FractionDavidO &);
    BoxDavidO(PointDavidO &, PointDavidO &, FractionDavidO &);
    ~BoxDavidO();

    void update(PointDavidO &, PointDavidO &, FractionDavidO &);
    void print(void);
    FractionDavidO getHeight(void);
    FractionDavidO getAreaDavidO(void);
    FractionDavidO getVolDavidO(void);

    BoxDavidO& operator=(const BoxDavidO &);
    bool operator==(const BoxDavidO &) const;
    bool operator!=(const BoxDavidO &) const;
    bool operator<=(const BoxDavidO &) const;
    bool operator<(const BoxDavidO &) const;
    bool operator>=(const BoxDavidO &) const;
    bool operator>(const BoxDavidO &) const;

	    
	friend ostream& operator<<(ostream &, const BoxDavidO &);

	PointDavidO getLL(void);


};
FractionDavidO compareBoxArea(BoxDavidO &, BoxDavidO &);
FractionDavidO compareBoxVol(BoxDavidO &, BoxDavidO &);
void boxInit(BoxDavidO *&);

#endif


