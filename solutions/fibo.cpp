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
    unsigned long long x, y, a, b, temp;
    cin >> x >> y;
    if (x == 0 || x == 1)  {
        cout << x % y << endl;
        return 0;
    }
    a = 0;
    b = 1;
    while (x)  {
        temp = b;
        b += a;
        a = temp % y;
        x--;
    }
    cout << a % y << endl;
    return 0;
}
