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
    long n, wi;
    long long res = 0;
    priority_queue<long long> ls;
    cin >> n;
    ls.push(0);
    while (n)  {
        cin >> wi;
        if (wi == -1)  {
            ls.push(res);
            res = 0;
        }
        else  {
            res += wi;
            if (n == 1)  {
                ls.push(res);
            }
        }
        n--;
    }
    cout << ls.top() << endl;
    return 0;
}
