#include <complex>
using namespace std;
namespace solver {

    class RealVariable {
        double a;
        double b;
        double c;
    public:

     RealVariable() : a(0.0), b(1.0), c(0.0){};
     RealVariable(double _a, double _b, double _c) : a(_a), b(_b), c(_c){};

     double getA(){
         return a;
     }
     double getB(){
         return b;
     }
     double getC(){
         return c;
     }
     void setA(double a_){
         this->a=a_;
     }
      void setB(double b_){
         this->b=b_;
     }
      void setC(double c_){
         this->c=c_;
     }
    };

    class ComplexVariable {
        complex <double> a;
        complex <double> b;
        complex <double> c;
    public:
        ComplexVariable () :a(0,0), b(1,0), c(0,0){};
        ComplexVariable (complex <double> _a, complex <double> _b, complex <double> _c) :a(_a),b(_b),c(_c){};
        ComplexVariable (double _a, double _b, double _c) :a(_a),b(_b),c(_c){};
        complex <double> _a(){return a;}
        complex <double> _b(){return b;}
        complex <double> _c(){return c;}
    };
    //ComplexVariable operator""i(unsigned long long x);

    double solve (RealVariable l);
    std::complex<double> solve(ComplexVariable var);

    //real operation
    RealVariable operator+ (RealVariable a, RealVariable b);
    RealVariable operator- (RealVariable a, RealVariable b);
    RealVariable operator* (RealVariable a, RealVariable b);
    RealVariable operator== (RealVariable a, RealVariable b);
        
    RealVariable operator+ (double a, RealVariable b);
    RealVariable operator- (double a, RealVariable b);
    RealVariable operator* (double a, RealVariable b);
    RealVariable operator== (double a, RealVariable b);
        
    RealVariable operator+ (RealVariable a, double b);
    RealVariable operator- (RealVariable a, double b);
    RealVariable operator* (RealVariable a, double b);
    RealVariable operator^ (RealVariable a, double b);
    RealVariable operator/ (RealVariable a, double b);
    RealVariable operator== (RealVariable a, double b);

    //complex operation
    ComplexVariable operator+ (ComplexVariable a, ComplexVariable b);
    ComplexVariable operator- (ComplexVariable a, ComplexVariable b);
    ComplexVariable operator* (ComplexVariable a, ComplexVariable b);
    ComplexVariable operator== (ComplexVariable a, ComplexVariable b);

    ComplexVariable operator+ (complex<double> a, ComplexVariable b);
    ComplexVariable operator- (complex<double> a, ComplexVariable b);
    ComplexVariable operator* (complex<double> a, ComplexVariable b);
    ComplexVariable operator== (complex<double> a, ComplexVariable b);

    ComplexVariable operator+ (ComplexVariable a,complex<double> b);
    ComplexVariable operator- (ComplexVariable a, complex<double> b);
    ComplexVariable operator* (ComplexVariable a, complex<double> b);
    ComplexVariable operator^ (ComplexVariable a, complex<double> b);
    ComplexVariable operator/ (ComplexVariable a, complex<double> b);
    ComplexVariable operator== (ComplexVariable a, complex<double> b);

}
