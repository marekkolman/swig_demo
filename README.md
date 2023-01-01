# swig_demo
Simple python SWIG demo

Make sure you have `anaconda python` installed.

Commands to call to build the python library from C++ files:

```
swig -c++ -python example.i
python setup.py build_ext --inplace
```
