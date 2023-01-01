%module example

%{
#include "example.h"
%}

%include "std_vector.i";
using namespace std;
%template(DoubleVector) vector<double>;

%include example.h
