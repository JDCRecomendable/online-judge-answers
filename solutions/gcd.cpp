/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable. All rights reserved.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>

using namespace std;

int main()  {
    long a, b, temp;
    cin >> a >> b;
    if (b > a)  {
        temp = a;
        a = b;
        b = temp;
    }
    while (b > 0)  {
        temp = a;
        a = b;
        b = temp % a;
    }
    cout << a << endl;
    return 0;
}
