/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    short n;
    int temp;
    vector<int> l;
    cin >> n;
    for (int i = 0; i < n; i++)  {
        cin >> temp;
        l.push_back(temp);
    }
    cout << l[n / 2] << endl;
    return 0;
}
