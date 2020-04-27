#include "doctest.h"
#include "solver.hpp"
using namespace solver;
using namespace std;
bool isEqual(double a, double b) {
    if (abs(a-b)<0.0001) return true;
    return false;
}

TEST_CASE ("delete!!!") { 
    RealVariable x;
    for (int i=0; i<=70; i++) CHECK(isEqual(solve(x ==16 ),16));
}

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

