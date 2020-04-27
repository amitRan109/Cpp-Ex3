#include "solver.hpp"
namespace solver{
    double solve (RealVariable& var) {return 0;}
    std::complex<double> solve(ComplexVariable& var) {
        std::complex<double> c=0;
        return c;
    }
    RealVariable& operator+ (RealVariable& a, RealVariable& b) {return a;}
    RealVariable& operator- (RealVariable& a, RealVariable& b){return a;}
    RealVariable& operator* (RealVariable& a, RealVariable& b){return a;}
    RealVariable& operator^ (RealVariable& a, RealVariable& b){return a;}
    RealVariable& operator/ (RealVariable& a, RealVariable& b){return a;}
    RealVariable& operator== (RealVariable& a, RealVariable& b){return a;}
    
    RealVariable& operator+ (double a, RealVariable& b){return b ;}
    RealVariable& operator- (double a, RealVariable& b){return b ;}
    RealVariable& operator* (double a, RealVariable& b){return b ;}
    RealVariable& operator^ (double a, RealVariable& b){return b ;}
    RealVariable& operator/ (double a, RealVariable& b){return b ;}
    RealVariable& operator== (double a, RealVariable& b){return b ;}
    
    RealVariable& operator+ (RealVariable& a, double b){return a ;}
    RealVariable& operator- (RealVariable& a, double b){return a ;}
    RealVariable& operator* (RealVariable& a, double b){return a ;}
    RealVariable& operator^ (RealVariable& a, double b){return a ;}
    RealVariable& operator/ (RealVariable& a, double b){return a ;}
    RealVariable& operator== (RealVariable& a, double b){return a ;}

    ComplexVariable& operator+ (ComplexVariable& a, ComplexVariable& b){return a;}
    ComplexVariable& operator- (ComplexVariable& a, ComplexVariable& b){return a;}
    ComplexVariable& operator* (ComplexVariable& a, ComplexVariable& b){return a;}
    ComplexVariable& operator^ (ComplexVariable& a, ComplexVariable& b){return a;}
    ComplexVariable& operator/ (ComplexVariable& a, ComplexVariable& b){return a;}
    ComplexVariable& operator== (ComplexVariable& a, ComplexVariable& b){return a;}

    ComplexVariable& operator+ (std::complex<double> a, ComplexVariable& b){return b;}
    ComplexVariable& operator- (std::complex<double> a, ComplexVariable& b){return b;}
    ComplexVariable& operator* (std::complex<double> a, ComplexVariable& b){return b;}
    ComplexVariable& operator^ (std::complex<double> a, ComplexVariable& b){return b;}
    ComplexVariable& operator/ (std::complex<double> a, ComplexVariable& b){return b;}
    ComplexVariable& operator== (std::complex<double> a, ComplexVariable& b){return b;}

    ComplexVariable& operator+ (ComplexVariable& a, std::complex<double> b){return a;}
    ComplexVariable& operator- (ComplexVariable& a, std::complex<double> b){return a;}
    ComplexVariable& operator* (ComplexVariable& a, std::complex<double> b){return a;}
    ComplexVariable& operator^ (ComplexVariable& a, std::complex<double> b){return a;}
    ComplexVariable& operator/ (ComplexVariable& a, std::complex<double> b){return a;}
    ComplexVariable& operator== (ComplexVariable& a, std::complex<double> b){return a;}
}