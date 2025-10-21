# jTime-Library
small time library for c++
jtime.hpp - compact C++ time library

Syntax:

Create a time variable:
time t(<seconds>)  // e.g., time t(5) creates a 5-second variable

Sleep (pause execution):
jtime::sleep(<seconds>)  // e.g., jtime::sleep(3) pauses 3 seconds

Notes:

* sleep blocks the current thread.
* time stores seconds only.
* Lightweight and simple, for small projects.
