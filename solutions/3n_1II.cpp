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
    int n, m;
    cin >> n >> m;
    for (int i = 2; i <= m; i++)  {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        if (n == 1)  {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}
