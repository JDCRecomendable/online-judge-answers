/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>
#include <list>

using namespace std;

int main()  {
    int n, m, temp, ans = 0;
    list<int> ls;
    cin >> n >> m;
    for (int i = 0; i < m; i++)  {
        cin >> temp;
        ls.push_back(temp);
    }
    ls.sort();
    while (ls.size() && n)  {
        if (n >= ls.front())  {
            n -= ls.front();
            ls.pop_front();
            ans++;
        }  else  break;
    }
    cout << ans << endl;
    return 0;
}
