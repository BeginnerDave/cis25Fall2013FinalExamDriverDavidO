
#include <iostream>
#include "FractionDavidO.h"
using namespace std;

//MEMBER FUNCTIONS
//
//BELOW

FractionDavidO& FractionDavidO::operator-() {
    num = -num;
    return *this;
}

FractionDavidO& FractionDavidO::operator+=(const FractionDavidO &arg) {
    *this = *this + arg;
    return *this;
}

FractionDavidO& FractionDavidO::operator-=(const FractionDavidO &arg) {
    *this = *this - arg;
    return *this;
}

bool FractionDavidO::operator==(const FractionDavidO &arg) const {
    if (num == arg.num && denom == arg.denom)
        return true;
    else
        return false;
}
bool FractionDavidO::operator!=(const FractionDavidO &arg) const {
    return !(*this == arg);
}

bool FractionDavidO::operator<(const FractionDavidO &arg) const {
    if ((*this != arg) && (((num * arg.denom) - (denom * arg.num)) < 0))
        return true;
    else
        return false;
}

bool FractionDavidO::operator<=(const FractionDavidO &arg) const {
    if (*this < arg || *this == arg)
        return true;
    else
        return false;
}

bool FractionDavidO::operator>=(const FractionDavidO &arg) const {
    if (*this == arg || *this > arg)
        return true;
    else
        return false;
}

bool FractionDavidO::operator>(const FractionDavidO &arg) const {
    if (*this != arg)
        return !(*this < arg);
    else
        return false;
}

ostream& operator<<(ostream &os, const FractionDavidO &fra) {
    os << fra.num << "/" << fra.denom;
    return os;
}

istream& operator>>(istream &is, FractionDavidO &fra) {
    is >> fra.num >> fra.denom;
    return is;
}

FractionDavidO::FractionDavidO() {
    // default constructor
    num = 0;
    denom = 1;
}

FractionDavidO::FractionDavidO(int n, int d) {
    int negitiveFlag = 0;
    // make sure wed dont give denom neg value or zero
    if (d == 0) {
        num = n;
        denom = 1;
    }
    if (d < 0) {
        denom = -d;
        num = -n;
    }
    else {
        num = n;
        denom = d;
    }
    // check & change sign before we reduce
    if (num < 0) {
        negitiveFlag = 1;
        num = -num;
    }
    int gcf = gcd(num, denom);
    //reduce
    if (negitiveFlag == 1) {
        num = -(num / gcf);
        denom = (denom / gcf);
    } else {
        num = (num / gcf);
        denom = (denom / gcf);
    }
}

void FractionDavidO::update(int n, int d) {
    int negitiveFlag = 0;
    // make sure wed dont give denom neg value or zero
    if (d == 0) {
        num = n;
        denom = 1;
    }
    if (d < 0) {
        denom = -d;
        num = -n;
    }
    else {
        num = n;
        denom = d;
    }
    // check & change sign before we reduce
    if (num < 0) {
        negitiveFlag = 1;
        num = -num;
    }
    int gcf = gcd(num, denom);
    //reduce
    if (negitiveFlag == 1) {
        num = -(num / gcf);
        denom = (denom / gcf);
    } else {
        num = (num / gcf);
        denom = (denom / gcf);
    }
}

FractionDavidO::FractionDavidO(const FractionDavidO &frOld) {
    // copy constructor
    num = frOld.num;
    denom = frOld.denom;
}

FractionDavidO::FractionDavidO(int n) {
    // convert constructor
    num = n;
    denom = 1;
}

FractionDavidO::~FractionDavidO() {
    // destructor
}

int FractionDavidO::getNum() const {
    return num;
}

int FractionDavidO::getDenom() const {
    return denom;
}

void FractionDavidO::setNum(int n) {
    num = n;
}

void FractionDavidO::setDenom(int d) {
    if (d >= 0) {
        denom = d;
    } else {
        denom = 1;
        cout << "Cannot set the denominator to 0 or a negative value."
         << "Setting denominator to 1.\n";
    }
}

FractionDavidO FractionDavidO::operator/(const FractionDavidO &fr2) const {
    int n;
    int d;
    int gcf;

    n = num * fr2.getDenom();
    d = denom * fr2.getNum();

    // see if we need to reduce
    if ((gcf = gcd(n, d)) != 0) {
        d /= gcf;
        n /= gcf;
    }
    return FractionDavidO(n, d);
}

FractionDavidO FractionDavidO::operator*(const FractionDavidO &fr2) const {
    int n;
    int d;
    int gcf;
    
    n = num * fr2.getNum();
    d = denom * fr2.getDenom();

    // see if we need to reduce
    if ((gcf = gcd(n, d)) != 0) {
        n /= gcf;
        d /= gcf;
    }
    
    return FractionDavidO(n, d);
}

FractionDavidO FractionDavidO::operator-(const FractionDavidO &fr2) const {
    return FractionDavidO((num * fr2.denom) - (denom * fr2.num),
                            denom * fr2.denom);
}

FractionDavidO FractionDavidO::operator+(const FractionDavidO &fr2) const {
    return FractionDavidO((num * fr2.denom) + (denom * fr2.num),
                         denom * fr2.denom);
}

FractionDavidO& FractionDavidO::operator=(const FractionDavidO &fr2) {
    if (this != &fr2) { // no self-assignment
        num = fr2.num;
        denom = fr2.denom;
    }
    return *this;
}


//STAND ALONE FUNCTIONS
//
//BELOW

void fractionInit(FractionDavidO *&fr1) {
	int n;
	int d;
	
	if (fr1) {
        cout << "Enter the numerator: ";
        cin >> n;
        cout << "Enter the denominator: ";
        cin >> d;
        fr1->update(n, d);
	} else {
		cout << "Enter the numerator: ";
        cin >> n;
        cout << "Enter the denominator: ";
        cin >> d;
        fr1 = new FractionDavidO(n, d);
	}
}


int gcd(int n, int d) {
    if (d == 0)
        return n;
    else
        return gcd(d, n % d);
}