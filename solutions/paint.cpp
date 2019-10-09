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
    int n, temp;
    long result = 0;
    vector<int> inc;
    cin >> n;
    for (int i = 0; i < n; i++)  {
        cin >> temp;
        result += temp;
    }
    for (int i = 0; i < n; i++)  {
        cin >> temp;
        inc.push_back(temp);
    }
    int day = 0;
    sort(inc.begin(), inc.end());
    while (inc.size())  {
        result += day * inc.back();
        inc.pop_back();
        day++;
    }
    cout << result << endl;
    return 0;
}
