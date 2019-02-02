/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable. All rights reserved.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>
#include <list>

using namespace std;

int main()  {
    int n, e, a, b;
    cin >> n >> e;
    list<int> num [n];
    for (int i = 0; i < e; i++)  {
        cin >> a >> b;
        num[a - 1].push_back(b);
        num[b - 1].push_back(a);
    }
    for (int i = 0; i < n; i++)  {
        if (num[i].size() == 0)  {
            cout << endl;
            continue;
        }
        while (num[i].size())  {
            if (num[i].size() > 1)
                cout << num[i].front() << ' ';
            else
                cout << num[i].front() << endl;
            num[i].pop_front();
        }
    }
    return 0;
}
