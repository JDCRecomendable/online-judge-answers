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
    unsigned n;
    short temp;
    vector<short> ls;
    cin >> n;
    for (unsigned i = 0; i < n; i++)  {
        cin >> temp;
        ls.push_back(temp);
    }
    sort(ls.begin(), ls.end());
    for (unsigned i = 0; i < n; i++)  {
        if (ls[i] >= 366)  {
            break;
        }
        cout << ls[i];
        if (i != (n - 1))  {
            cout << ' ';
        }
    }
    cout << endl;
    return 0;
}
