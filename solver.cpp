#include "solver.hpp"
#include <iostream>
using namespace std;
namespace solver{
    double solve (RealVariable l) {
       double r=(-1*l.getA());
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
            double s = sqrt(l.getB()*l.getB()-4*l.getA()*l.getC());
            r = (-1*l.getB()+s)/2*l.getC();

        }
        
        return r;
        }
    std::complex<double> solve(ComplexVariable l) {
        complex <double> minus_one (-1,0);
        complex<double> r=minus_one*l._a();
        complex<double> zero (0,0);
        if(l._c()== zero ){
            if(l._b()== zero){
               throw runtime_error("incorrect mishvaa"); 
            }
            else {r=r/l._b(); }
        }
        else if(l._b()== zero){
            r=r/l._c();
            // if(r > zero){
            //     r=sqrt(r);
            // }
            // else throw runtime_error("negetive sqrt"); 
            r=sqrt(r); // ???
        }
        else
        {
            complex <double> four (4,0);
            complex <double> two (2,0);
            complex <double> s = sqrt(l._b()*l._b()-four*l._a()*l._c());
            r = (minus_one*l._b()+s)/two*l._c(); //?????
        }
        
        return r;
    }
    RealVariable operator+ (RealVariable a, RealVariable b) {
        return RealVariable(a.getA()+b.getA(),a.getB()+b.getB(),a.getC()+b.getC());
    }
    RealVariable operator- (RealVariable a, RealVariable b){
       return RealVariable(a.getA()-b.getA(),a.getB()-b.getB(),a.getC()-b.getC());
    }
    RealVariable operator* (RealVariable a, RealVariable b){
        if (a.getC() != 0 && b.getC() != 0) throw runtime_error("malla>2");
        else if (a.getC() != 0 && b.getB() != 0) throw runtime_error("malla>2");
        else if (a.getB() !=0 && b.getA() !=0) throw runtime_error("malla>2");
        else {
            double _a = a.getA()*b.getA();
            double _b = a.getB()*b.getA() + a.getA()*b.getB();
            double _c = a.getC()*b.getA() + a.getB()*b.getB() + a.getA()*b.getC();
            return RealVariable(_a,_b,_c);
        }
    }
    RealVariable operator/ (RealVariable a, RealVariable b){return a;}
    RealVariable operator== (RealVariable a, RealVariable b){ 
        return a-b;
    } 
    RealVariable operator+ (double a, RealVariable b){
        return RealVariable(b.getA()+a,b.getB(),b.getC());
    }
    RealVariable operator- (double a, RealVariable b){
         return RealVariable(b.getA()-a,b.getB(),b.getC());
    }
    RealVariable operator* (double a, RealVariable b){
        return RealVariable(b.getA()*a,b.getB()*a,b.getC()*a);
    }
    RealVariable operator/ (double a, RealVariable b){//?????????????
        // if(b!=0){
        //  return RealVariable(a/b.getA(),a/b.getB(),a/b.getC())*;
        return b;
    }
        
    RealVariable operator== (double a, RealVariable b){
        return b-a;
    }
    RealVariable operator+ (RealVariable a, double b){
        return b+a;
    }
    RealVariable operator- (RealVariable a, double b){
        return b-a;
    }
    RealVariable operator* (RealVariable a, double b){
        return b*a;
    }
    RealVariable operator^ (RealVariable a, double b){
        if(b==0){
            return(RealVariable(1,0,0));
        }
        if(b==1){
            return a;
        }
        if(b==2){
            if(a.getC()==0.0 && a.getA()==0.0){
                return RealVariable(0,0,a.getB()*a.getB());
            }
            else throw runtime_error("Power error");

        }
        else throw runtime_error("Power error");
    
    }
    RealVariable operator/ (RealVariable a, double b){
        if(b!=0){
            return RealVariable(a.getA()/b,a.getB()/b,a.getC()/b);
        }
        else throw runtime_error("divide in 0");
    }
    RealVariable operator== (RealVariable a, double b){
        return a-b;
    }
    ComplexVariable operator+ (ComplexVariable a, ComplexVariable b){
        return ComplexVariable(a._a()+b._a(),a._b()+b._b(),a._c()+b._c());

    }
    ComplexVariable operator- (ComplexVariable a, ComplexVariable b){
        return ComplexVariable(a._a()-b._a(),a._b()-b._b(),a._c()-b._c());
    }
    ComplexVariable operator* (ComplexVariable a, ComplexVariable b){
        complex <double> zero (0,0);
        if (a._c() != zero && b._c() != zero) throw runtime_error("malla>2");
        else if (a._c() != zero && b._b() != zero) throw runtime_error("malla>2");
        else if (a._b() !=zero && b._a() !=zero) throw runtime_error("malla>2");
        else {
            complex <double> a1 = a._a()*b._a();
            complex <double> b1 = a._b()*b._a() + a._a()*b._b();
            complex <double> c1 = a._c()*b._a() + a._b()*b._b() + a._a()*b._c();
            return ComplexVariable(a1,b1,c1);
        }
    }
    ComplexVariable operator== (ComplexVariable a, ComplexVariable b){
        return a-b;
    }

    ComplexVariable operator+ (complex<double> a, ComplexVariable b){
        return ComplexVariable(b._a()+a,b._b(),b._c());
    }
    ComplexVariable operator- (complex<double> a, ComplexVariable b){
        return ComplexVariable(a-b._a(),-b._b(),-b._c());
    }
    ComplexVariable operator* (complex<double> a, ComplexVariable b){
        return ComplexVariable(a*b._a(),a*b._b(),a*b._c());
    }
    ComplexVariable operator== (complex<double> a, ComplexVariable b){
        return b-a;
    }
    ComplexVariable operator+ (ComplexVariable a, complex<double> b){
        return b+a;
    }
    ComplexVariable operator- (ComplexVariable a, complex<double> b){
        return ComplexVariable(a._a()-b,a._b(),a._c());
    }
    ComplexVariable operator* (ComplexVariable a,complex<double> b){
        return b*a;
    }
    ComplexVariable operator^ (ComplexVariable a,complex<double> b){
        if (b==complex <double> (0,0)) return ComplexVariable(1,0,0);
        if (b==complex <double> (1,0)) return a;
        if (b==complex <double> (2,0)){
            if (a._c() != complex <double> (0,0)) runtime_error("power too big");
        
        }
        else throw runtime_error("power too big");
        return ComplexVariable(a._a()*a._a(),complex <double> (0,0),a._b()*a._b());
    }
    ComplexVariable operator/ (ComplexVariable a,complex<double> b){
        if (b == complex <double> (0,0)) throw runtime_error("no divide in zero");
        else return ComplexVariable(a._a()/b,a._b()/b,a._c()/b);
    }
    ComplexVariable operator== (ComplexVariable a,complex<double> b){
        return a-b;
    }
    // ComplexVariable operator== (ComplexVariable a, double b){
    //      complex <double> _b(b,0);
    //      return a == _b;
    // }

  }