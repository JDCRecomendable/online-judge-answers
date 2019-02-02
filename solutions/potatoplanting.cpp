/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable. All rights reserved.
 */

#include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
// #include <iostream>

using namespace std;

int main()  {
    unsigned long long h, w, wt, n;
    cin >> h >> w >> n;
    while (h)  {
        wt = w;
        while (wt)  {
            if (n)  {
                cout << 'X';
                n--;
            }
            else
                cout << 'O';
            wt--;
        }
        cout << endl;
        h--;
    }
    return 0;
}
