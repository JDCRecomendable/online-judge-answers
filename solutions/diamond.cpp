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
    short n, dots, spaces;
    cin >> n;
    short total = n * 2 - 1;
    for (short i = 1; i <= n; i++)  {
        dots = 2 * i - 1;
        spaces = (total - dots) / 2;
        for (short j = 0; j < spaces; j++)  {
            cout << ' ';
        }
        for (short j = 0; j < dots; j++)  {
            cout << '*';
        }
        cout << endl;
    }
    for (short i = n - 1; i > 0; i--)  {
        dots = 2 * i - 1;
        spaces = (total - dots) / 2;
        for (short j = 0; j < spaces; j++)  {
            cout << ' ';
        }
        for (short j = 0; j < dots; j++)  {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
