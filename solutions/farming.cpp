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
    short h, w;
    int result = 0;
    cin >> h >> w;
    string p;
    for (short i = 0; i < h; i++)  {
        cin >> p;
        for (short j = 0; j < w; j++)  {
            if (p[j] == '#')  result++;
        }
    }
    cout << result << endl;
    return 0;
}
