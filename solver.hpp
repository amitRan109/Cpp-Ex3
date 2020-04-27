#include <iostream>
#include <complex>
namespace solver {

    class RealVariable {
        double var;

    };

    class ComplexVariable {
        std::complex <double> var;
    };
    //ComplexVariable operator""i(unsigned long long x);

    double solve (RealVariable& var);
    std::complex<double> solve(ComplexVariable& var);

            //real operation
         RealVariable& operator+ (RealVariable& a, RealVariable& b);
         RealVariable& operator- (RealVariable& a, RealVariable& b);
         RealVariable& operator* (RealVariable& a, RealVariable& b);
         RealVariable& operator^ (RealVariable& a, RealVariable& b);
         RealVariable& operator/ (RealVariable& a, RealVariable& b);
         RealVariable& operator== (RealVariable& a, RealVariable& b);
        
         RealVariable& operator+ (double a, RealVariable& b);
         RealVariable& operator- (double a, RealVariable& b);
         RealVariable& operator* (double a, RealVariable& b);
         RealVariable& operator^ (double a, RealVariable& b);
         RealVariable& operator/ (double a, RealVariable& b);
         RealVariable& operator== (double a, RealVariable& b);
        
         RealVariable& operator+ (RealVariable& a, double b);
         RealVariable& operator- (RealVariable& a, double b);
         RealVariable& operator* (RealVariable& a, double b);
         RealVariable& operator^ (RealVariable& a, double b);
         RealVariable& operator/ (RealVariable& a, double b);
         RealVariable& operator== (RealVariable& a, double b);

                 //complex operation
         ComplexVariable& operator+ (ComplexVariable& a, ComplexVariable& b);
         ComplexVariable& operator- (ComplexVariable& a, ComplexVariable& b);
         ComplexVariable& operator* (ComplexVariable& a, ComplexVariable& b);
         ComplexVariable& operator^ (ComplexVariable& a, ComplexVariable& b);
         ComplexVariable& operator/ (ComplexVariable& a, ComplexVariable& b);
         ComplexVariable& operator== (ComplexVariable& a, ComplexVariable& b);

         ComplexVariable& operator+ (std::complex<double> a, ComplexVariable& b);
         ComplexVariable& operator- (std::complex<double> a, ComplexVariable& b);
         ComplexVariable& operator* (std::complex<double> a, ComplexVariable& b);
         ComplexVariable& operator^ (std::complex<double> a, ComplexVariable& b);
         ComplexVariable& operator/ (std::complex<double> a, ComplexVariable& b);
         ComplexVariable& operator== (std::complex<double> a, ComplexVariable& b);

         ComplexVariable& operator+ (ComplexVariable& a, std::complex<double> b);
         ComplexVariable& operator- (ComplexVariable& a, std::complex<double> b);
         ComplexVariable& operator* (ComplexVariable& a, std::complex<double> b);
         ComplexVariable& operator^ (ComplexVariable& a, std::complex<double> b);
         ComplexVariable& operator/ (ComplexVariable& a, std::complex<double> b);
         ComplexVariable& operator== (ComplexVariable& a, std::complex<double> b);

}
