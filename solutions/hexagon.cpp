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
    short n;
    cin >> n;
    for (short i = 1; i <= n; i++)  {
        for (short j = 0; j < (n - i); j++)
            cout << ' ';
        for (short j = 0; j < (n + i - 1); j++)
            cout << 'x';
        for (short k = 1; k < i; k++)
            cout << 'x';
        cout << endl;
    }
    for (short i = (n - 1); i > 0; i--)  {
        for (short j = 0; j < (n - i); j++)
            cout << ' ';
        for (short j = 0; j < (n + i - 1); j++)
            cout << 'x';
        for (short k = 1; k < i; k++)
            cout << 'x';
        cout << endl;
    }
    return 0;
}
