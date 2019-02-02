/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable. All rights reserved.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()  {
    int n, val;
    string str;
    map<int, int> ascii;
    cin >> n >> str;
    for (int i = 0; i < n; i++)  {
        val = int(str[i]);
        ascii[val] += 1;
    }
    for (int i = 97; i < 123; i++)  {
        cout << char(i) << ' ' << ascii[i] << endl;
    }
    return 0;
}
