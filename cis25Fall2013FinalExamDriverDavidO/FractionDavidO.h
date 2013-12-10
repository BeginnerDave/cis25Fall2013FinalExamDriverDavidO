
#include <iostream>
using namespace std;
#ifndef FRACTIONDAVIDO_H
#define FRACTIONDAVIDO_H

class FractionDavidO {
    friend ostream& operator<<(ostream &, const FractionDavidO &);
    friend istream& operator>>(istream &, FractionDavidO &);
private:
    int num;
    int denom;
public:
    FractionDavidO();
    FractionDavidO(int, int);
    FractionDavidO(const FractionDavidO &);
    FractionDavidO(int);
    ~FractionDavidO();
    int getNum() const;
    int getDenom() const;
    void setNum(int);
    void setDenom(int);
    void update(const int, const int);
    void printFraction(void);
    FractionDavidO operator+(const FractionDavidO &) const;
    FractionDavidO operator-(const FractionDavidO &) const;
    FractionDavidO operator*(const FractionDavidO &) const;
    FractionDavidO operator/(const FractionDavidO &) const;
    FractionDavidO& operator=(const FractionDavidO &);
    FractionDavidO& operator+=(const FractionDavidO &);
    FractionDavidO& operator-=(const FractionDavidO &);
    FractionDavidO& operator-(void);
    bool operator==(const FractionDavidO &) const;
    bool operator!=(const FractionDavidO &) const;
    bool operator<=(const FractionDavidO &) const;
    bool operator<(const FractionDavidO &) const;
    bool operator>=(const FractionDavidO &) const;
    bool operator>(const FractionDavidO &) const;
};

void fractionInit(FractionDavidO *&);

int gcd(int, int);


#endif
