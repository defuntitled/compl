#include <iostream>

class ComplexNumbers {
    friend std::istream& operator >> (std::istream &is,ComplexNumbers &num);
    friend std::ostream& operator << (std::ostream &os, ComplexNumbers &num);
public:
    ComplexNumbers(double res,double im);
    ComplexNumbers();
    double getRes() const;
    double getIm() const;
    ComplexNumbers operator + (ComplexNumbers &add) ;
    ComplexNumbers operator - (ComplexNumbers &sub) ;
    ComplexNumbers operator * (ComplexNumbers &mult) ;
    ComplexNumbers operator / (ComplexNumbers &div) ;
    ComplexNumbers& operator = (ComplexNumbers c2);

private:
    double res,im;
};

