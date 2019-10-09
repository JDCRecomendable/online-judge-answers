/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>
#include <cmath>

using namespace std;

int main()  {
    unsigned long n, k;
    cin >> n;
    if (n <= 1)  {
        cout << "Not Prime" << endl;
        return 0;
    }
    k = pow(n, (1.0/2.0));
    for (unsigned long i = 2; i <= k; i++)  {
        if (n % i == 0)  {
            cout << "Not Prime" << endl;
            return 0;
        }
    }
    cout << "Prime" << endl;
    return 0;
}
