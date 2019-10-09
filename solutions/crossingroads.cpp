/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>

using namespace std;

int main()  {
    short a, b, c, d, e;
    cin >> a >> b >> c;
    d = b + c;
    e = (a - b) + (a - c);
    if (d > e)  cout << e << endl;
    else        cout << d << endl;
    return 0;
}
