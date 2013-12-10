#ifndef POINTDAVIDO_H
#define POINTDAVIDO_H
#include "FractionDavidO.h"

class PointDavidO {
    friend ostream& operator<<(ostream &, const PointDavidO &);
    friend istream& operator>>(istream &, PointDavidO &);
private:
    FractionDavidO x;
    FractionDavidO y;
public:
    PointDavidO();
    PointDavidO(FractionDavidO &, FractionDavidO &);
    PointDavidO(const PointDavidO &);
    ~PointDavidO();
    PointDavidO& operator=(const PointDavidO &);
    FractionDavidO getX();
    FractionDavidO getY();
    void moveBy(const FractionDavidO &, const FractionDavidO &);
    void moveBy(int);
    void flipByX();
    void flipByY();
    void flipThroughOrigin();
    void update(FractionDavidO &, FractionDavidO &);
    bool operator==(const PointDavidO &) const;
    bool operator!=(const PointDavidO &) const;
    bool operator<=(const PointDavidO &) const;
    bool operator<(const PointDavidO &) const;
    bool operator>=(const PointDavidO &) const;
    bool operator>(const PointDavidO &) const;

};

void pointInit(PointDavidO *&);

#endif
