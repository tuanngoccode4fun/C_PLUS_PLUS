#include<iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    /*
    l-value is addressable if they're not a constant.
    r-value is not l-value (non-addressable and non-assignable).
     . A value that's not an l-value.
        + On the right hand side of an assignment expression.
        + a literal.
        + a temporary which is intended to be non-modifiable.
    */
   int x = 100;
   int &ref = x;// ref1 is reference to l-value
   ref = 1000;

   int &ref_1 = 100; // Error 100 is an r-value.
}