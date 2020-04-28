#include "doctest.h"
#include "solver.hpp"
using namespace solver;
using namespace std;
bool isEqual(double a, double b) {
    if (abs(a-b)<0.0001) return true;
    return false;
}

// TEST_CASE ("delete!!!") { 
//     RealVariable x;
//     for (int i=0; i<=70; i++) CHECK(isEqual(solve(x ==16 ),16));
// }

TEST_CASE ("real: good") { //25
    RealVariable x;
    CHECK(isEqual(solve(x ==16 ),16));
    CHECK(isEqual(solve(2*x-4 == 10),7));
    CHECK(isEqual(solve(x == 5),5));
    CHECK(isEqual(solve(2*x-4.0 == 10.0),7));
    CHECK(isEqual(solve(3*x == 15),5));
    CHECK(isEqual(solve(x+5 == 0),solve(x+6 == 1)));
    CHECK(isEqual(solve(x+6 == 1),-5));
    CHECK(isEqual(solve(x+7 == 0),-7));
    CHECK(isEqual(solve(x+8 == 10),2));
    CHECK(isEqual(solve(x-3 == 0),3));
    CHECK(isEqual(solve(x-5 == 0),5));
    CHECK(isEqual(solve(x-10 == 0),10));
    CHECK(isEqual(solve(x-30 == 0),30));
    CHECK(isEqual(solve(x-200 == 100),300));
    CHECK(isEqual(solve(3*x-15 == 2*x+10 ),25));
    CHECK(isEqual(solve(2*x+5 == 15),5));
    CHECK(isEqual(solve(x+7 ==14),14));
    CHECK(isEqual(solve(2*x ==x),0));
    CHECK(isEqual(solve(15*x ==15),1));
    CHECK(isEqual(solve(x == 2*x+18),-18));
    CHECK(isEqual(solve((x^3) ==-1),-1));
    CHECK(isEqual(solve(2*x == 20),10));
    CHECK(isEqual(solve(x+4 ==-4),0));
    CHECK(isEqual(solve(x+61 ==-61),0));
    CHECK(isEqual(solve(x+10 ==-10),0));
}

TEST_CASE ("real:bad") { //20
    RealVariable x;
    RealVariable y;
    CHECK_THROWS(solve(x == x));
    CHECK_THROWS(solve(y == x));
    CHECK_THROWS(solve((x^2)+5 == x^3));
    CHECK_THROWS(solve((x^2) == -1));
    CHECK_THROWS(solve((x^2) == -16));
    CHECK_THROWS(solve(x+y == 1));
    CHECK_THROWS(solve(x-y == 15));
    CHECK_THROWS(solve(2*y == x));
    CHECK_THROWS(solve((y^2) == x));
    CHECK_THROWS(solve(y+55 == x));
    CHECK_THROWS(solve(x));
    CHECK_THROWS(solve(2*x));
    CHECK_THROWS(solve(x == x));
    CHECK_THROWS(solve(x == 1));
    CHECK_THROWS(solve(x == 5));
    CHECK_THROWS(solve((x/0) == 0));
    CHECK_THROWS(solve(x/(5-5) == x));
    CHECK_THROWS(solve((x-x)/5 == 0));
    CHECK_THROWS(solve(x+0/x == 0));
    CHECK_THROWS(solve(x+y == 9));
    CHECK_THROWS(solve(x+y == 10));
    CHECK_THROWS(solve((x/y) == 9));
    CHECK_THROWS(solve((x/0) == 9));
    CHECK_THROWS(solve((0/x) == 9));
    CHECK_THROWS(solve(((x+2)/0) == 9));
}


TEST_CASE ("real: good") { //25
    RealVariable x;
    CHECK(isEqual(solve(x ==22 ),22));
    CHECK(isEqual(solve(3*x == 30),10));
    CHECK(isEqual(solve(x == 8),8));
    CHECK(isEqual(solve(5*x-4.0 == 46.0),10));
    CHECK(isEqual(solve(8*x == 16),2));
    CHECK(isEqual(solve(x+9 == 10),solve(x+6 == 7)));
    CHECK(isEqual(solve(x+10 == 1),-9));
    CHECK(isEqual(solve(x+11 == 0),-11));
    CHECK(isEqual(solve(x+8 == 10),2));
    CHECK(isEqual(solve(x-6 == 0),6));
    CHECK(isEqual(solve(x-200 == 0),200));
    CHECK(isEqual(solve(x-100 == 0),100));
    CHECK(isEqual(solve(x-302 == 0),302));
    CHECK(isEqual(solve(x+100 == 100),0));
    CHECK(isEqual(solve(x+10 == 10),0));
    CHECK(isEqual(solve(x+16 == 16),0));
    CHECK(isEqual(solve(x+2 == 2),0));
    CHECK(isEqual(solve(x+3 == 3),0));
    CHECK(isEqual(solve(x+5 == 5),0));
    CHECK(isEqual(solve(x+8 == 8),0));
    CHECK(isEqual(solve(x+9 == 9),0));
    CHECK(isEqual(solve(x+19 == 19),0));
    CHECK(isEqual(solve(x+1000 == 1000),0));
    CHECK(isEqual(solve(x+157 == 157),0));
    CHECK(isEqual(solve(x+5555 == 5555),0));
}

TEST_CASE ("real:bad") { //30
    RealVariable x;
    RealVariable y;
    CHECK_THROWS(solve(x^2 == x));
    CHECK_THROWS(solve(y^2 == x));
    CHECK_THROWS(solve((x^3)+9 == x^7));
    CHECK_THROWS(solve((x^2) == -10));
    CHECK_THROWS(solve((x^2) == -293));
    CHECK_THROWS(solve((x^2) == -234));
    CHECK_THROWS(solve((x^2) == -2));
    CHECK_THROWS(solve((x^2) == -99));
    CHECK_THROWS(solve((x^2) == -23));
    CHECK_THROWS(solve((x^2) == -27));
    CHECK_THROWS(solve((x^2) == -1));
    CHECK_THROWS(solve((x^2) == -2));
    CHECK_THROWS(solve((x^2) == -3));
    CHECK_THROWS(solve((x^2) == -4));
    CHECK_THROWS(solve((x^2) == -5));
    CHECK_THROWS(solve((x^2) == -6));
    CHECK_THROWS(solve((x^2) == -9));
    CHECK_THROWS(solve((x^2) == -8));
    CHECK_THROWS(solve((x^2) == -11));
    CHECK_THROWS(solve((x^2) == -111));
    CHECK_THROWS(solve((x^2) == -99989));
    CHECK_THROWS(solve((x^2) == -55433));
    CHECK_THROWS(solve((x^2) == -455));
    CHECK_THROWS(solve((x^2) == -3331));
    CHECK_THROWS(solve((x^2) == -33));
    CHECK_THROWS(solve((x^2) == -89));
    CHECK_THROWS(solve((x^2) == -33));
    CHECK_THROWS(solve((x^2) == -45));
    CHECK_THROWS(solve((x^2) == -31));
    CHECK_THROWS(solve((x^2) == -3));
}