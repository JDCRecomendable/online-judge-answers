/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable. All rights reserved.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>
#include <string>

using namespace std;

int main()  {
    short n;
    string l;
    cin >> n;
    cin.ignore();
    getline(cin, l);
    while (n)  {
        cout << l << endl;
        n--;
    }
    return 0;
}
