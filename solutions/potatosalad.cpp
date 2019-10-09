/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()  {
    unsigned n, m, d;
    vector<short> p;
    cin  >> n >> m;
    for (unsigned i = 0; i < n; i++)  {
        cin >> d;
        p.push_back(d);
    }
    sort(p.begin(), p.end());
    d = 0;
    for (unsigned i = 0; i < m; i++)  {
        d += p.back();
        p.pop_back();
    }
    cout << d << endl;
    return 0;
}
