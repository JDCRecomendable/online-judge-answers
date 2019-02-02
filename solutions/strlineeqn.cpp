/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable. All rights reserved.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()  {
    double m, c;
    cin >> m >> c;
    cout << fixed;
    cout << setprecision(1) << round((-10 * c) / m) / 10 << endl;
    return 0;
}
