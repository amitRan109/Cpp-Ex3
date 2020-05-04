#include "solver.hpp"
namespace solver{
    double solve (RealVariable& l) {
       double r=(-1*l.getA());
        l.setA(0);
        if(l.getC()==0){
            if(l.getB()==0){
               throw runtime_error("incorrect mishvaa"); 
            }
            else{
                r=r/l.getB();
                
            }
        }
        else if(l.getB()==0){
            r=r/l.getC();
            if(r>0){
                r=sqrt(r);
            }
            else throw runtime_error("negetive sqrt"); 
        }
        else
        {
            double s = sqrt(l.getB()*l.getB()-4*r*l.getC());
            r = (-1*l.getB()+s)/2*l.getC();

        }
        
        return r;
        }
    std::complex<double> solve(ComplexVariable& var) {
        std::complex<double> c=0;
        return c;
    }
    RealVariable& operator+ (RealVariable& a, RealVariable& b) {
        return(RealVariable(a.getA()+b.getA(),a.getB()+b.getB(),a.getC()+b.getC()));
        }
    RealVariable& operator- (RealVariable& a, RealVariable& b){
       return(RealVariable(a.getA()-b.getA(),a.getB()-b.getB(),a.getC()-b.getC()));
       }
    RealVariable& operator* (RealVariable& a, RealVariable& b){
        if (a.getC() != 0 && b.getC() != 0) throw
        }
    RealVariable& operator/ (RealVariable& a, RealVariable& b){return a;}
    RealVariable& operator== (RealVariable& a, RealVariable& b){return a;}
    
    RealVariable& operator+ (double a, RealVariable& b){
        return RealVariable(b.getA()+a,b.getB(),b.getC())*;
        }
    RealVariable& operator- (double a, RealVariable& b){
         return RealVariable(b.getA()-a,b.getB(),b.getC())*;
        }
    RealVariable& operator* (double a, RealVariable& b){
        return RealVariable(b.getA()*a,b.getB()*a,b.getC()*a)*;
        }
    RealVariable& operator/ (double a, RealVariable& b){//?????????????
        if(b!=0){
         return RealVariable(a/b.getA(),a/b.getB(),a/b.getC())*;
        }
        }
    RealVariable& operator== (double a, RealVariable& b){
        return RealVariable(b.getA()-a,b.getB(),b.getC())*;
        }
    



    RealVariable& operator+ (RealVariable& a, double b){
        return RealVariable(a.getA()+b,a.getB(),a.getC())*;
        }
    RealVariable& operator- (RealVariable& a, double b){
         return RealVariable(a.getA()-b,a.getB(),a.getC())*;
        }
    RealVariable& operator* (RealVariable& a, double b){
         return RealVariable(a.getA()*b,a.getB()*b,a.getC()*b)*;
        }
    RealVariable& operator^ (RealVariable& a, double b){
        if(b==0){
            return(RealVariable(1,0,0));
        }
        if(b==1){
            return a;
        }
        if(b==2){
            if(a.getC()==0.0&& a.getA==0.0){
                return RealVariable(0,0,a.getB()^2);
            }
            else throw runtime_error("Power error");

        }
        else throw runtime_error("Power error");
    
        }
    RealVariable& operator/ (RealVariable& a, double b){
        if(b!=0){
            return RealVariable(a.getA()/b,a.getB()/b,a.getC()/b)*;
        }
        else throw runtime_error("divide in 0");
        }
    RealVariable& operator== (RealVariable& a, double b){
        return RealVariable(a.getA()-b,a.getB(),a.getC())*;
        }

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