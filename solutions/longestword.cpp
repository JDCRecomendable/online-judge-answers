/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>
#include <string>

using namespace std;

int main()  {
    unsigned short n;
    string t, h;
    cin >> n;
    cin >> h;
    for (unsigned short i = 1; i < n; i++)  {
        cin >> t;
        if (t.size() > h.size())  {
            h = t;
        }
    }
    cout << h << endl;
    return 0;
}
