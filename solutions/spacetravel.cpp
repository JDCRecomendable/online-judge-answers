/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable.
 */

#include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
// #include <iostream>

using namespace std;

int main()  {
    int n, s;
    long t, r = 0;
    priority_queue<long> ls;
    cin >> n >> s;
    for (int i = 0; i < n; i++)  {
        cin >> t;
        ls.push(t);
    }
    while (ls.size())  {
        t = ls.top();
        if (s)  {
            r += t;
            s--;
        }
        else
            r += t * 2;
        ls.pop();
    }
    cout << r << endl;
    return 0;
}
