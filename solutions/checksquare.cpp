/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable. All rights reserved.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>
#include <cmath>

using namespace std;

int main()  {
    unsigned int a, b;
    cin >> a;
    b = pow(a, (1.0/2.0));
    b = pow(b, 2);
    if (a == b)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
