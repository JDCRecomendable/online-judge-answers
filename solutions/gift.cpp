/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>

using namespace std;

int main()  {
    short n;
    int k, b, t, result = 0;
    cin >> n >> k;
    cin >> b;
    for (short i = 1; i < n; i++)  {
        cin >> t;
        if ((b - t) >= k)  {
            result++;
        }
        b = t;
    }
    cout << result << endl;
    return 0;
}
