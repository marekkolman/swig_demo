# SWIG demo
Simple python SWIG demo

Make sure you have `anaconda python` installed.

Commands to call to build the python library from C++ files:

```
swig -c++ -python example.i
python setup.py build_ext --inplace
```





## If you want to include external C++ libraries
Let's assume you want to include `boost` library, and get a python SWIG of this C++ project including `boost` library.

Then we include the library in the usual way in the `C++` files - e.g. the `example.h` becomes
```
#ifndef EXAMPLE_H
#define EXAMPLE_H

#include<vector>
#include<iostream>
#include <boost/lambda/lambda.hpp>
#include <boost/any.hpp>

using namespace std;

int test();


#endif
```
and we need to include location of these libraries also in the `setup.py` file. For example

```
# setup.py
...
example_module = Extension('_example',sources = ['example_wrap.cxx', 'example.cpp'], 
                 include_dirs = ['/opt/homebrew/opt/boost/include'])
...
where the new parameter `include_dirs` now contains a link to the `boost` include library dir
```
