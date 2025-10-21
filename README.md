# jTime-Library
small time library for c++
jtime.hpp - compact C++ time library

Syntax:

Create a time variable:
time t(<seconds>)  /

Sleep (pause execution):
jtime::sleep(<seconds>)  

Notes:
* sleep blocks the current thread.
* time stores seconds only.
* Lightweight and simple, for small projects.
