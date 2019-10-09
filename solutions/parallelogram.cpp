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
    int n;
    string a;
    cin >> n >> a;
    for (int i = 0; i < n; i++)  {
        for (int j = 0; j < i; j++)  {
            cout << ' ';
        }
        cout << a << endl;
    }
    return 0;
}
