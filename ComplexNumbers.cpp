#include "ComplexNumbers.h"

ComplexNumbers::ComplexNumbers(double r, double i) {
    res = r;
    im = i;
}

ComplexNumbers ComplexNumbers::operator+(ComplexNumbers &add)  {
    return {res + add.getRes(), im + add.getIm()};
}

ComplexNumbers ComplexNumbers::operator-(ComplexNumbers &sub)  {
    return {res - sub.getRes(), im - sub.getIm()};
}

ComplexNumbers ComplexNumbers::operator*(ComplexNumbers &mult)  {
    return {res * mult.getRes() - im * mult.getIm(), res * mult.getIm() + mult.getRes() * im};
}

ComplexNumbers ComplexNumbers::operator/(ComplexNumbers &div)  {
    double dividor = div.getRes() * div.getRes() + (div.getIm() * div.getIm());
    return {(res*div.getRes()+im*div.getIm())/dividor, (im*div.getRes()-res*div.getIm())/dividor};
}

std::istream &operator>>(std::istream &is,ComplexNumbers &num) {
    is >> num.res >> num.im;
    return is;
}

std::ostream & operator<<(std::ostream &os,ComplexNumbers &num){
    if (num.im < 0)os << num.res << num.im << "*i";
    else os << num.res << '+' << num.im << "*i";
    return os;
}

double ComplexNumbers::getRes() const {
    return res;
}

double ComplexNumbers::getIm() const {
    return im;
}

ComplexNumbers& ComplexNumbers::operator=(ComplexNumbers c2) {
    im = c2.getIm();
    res = c2.getRes();
    return *this;
}

ComplexNumbers::ComplexNumbers() {
    res = 0;
    im = 0;
}


