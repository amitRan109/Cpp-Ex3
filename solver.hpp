
namespace solver {

    class RealVariable {
        double a;
        double b;
        double c;
     RealVariable(const double &_a = 0.0, const double &_b = 1.0, const double &_c = 0.0) 
     : a(_a), b(_b), c(_c){};
     double getA()const{
         return a;
     }
     double getB()const{
         return b;
     }
     double getC()const{
         return c;
     }
     void setA(double a_){
         this->a=a_
     }
      void setB(double b_){
         this->b=b_
     }
      void setC(double c_){
         this->c=c_
     }
    };

    class ComplexVariable {
        std::complex <double> var;
    };
    //ComplexVariable operator""i(unsigned long long x);

    double solve (RealVariable& l);
    std::complex<double> solve(ComplexVariable& var);

            //real operation
         RealVariable& operator+ (RealVariable& a, RealVariable& b);
         RealVariable& operator- (RealVariable& a, RealVariable& b);
         RealVariable& operator* (RealVariable& a, RealVariable& b);
         RealVariable& operator/ (RealVariable& a, RealVariable& b);
         RealVariable& operator== (RealVariable& a, RealVariable& b);
        
         RealVariable& operator+ (double a, RealVariable& b);
         RealVariable& operator- (double a, RealVariable& b);
         RealVariable& operator* (double a, RealVariable& b);
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
