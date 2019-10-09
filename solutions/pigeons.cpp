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
    unsigned n, m, c = 0;
    string t, result = "PLAN ACCEPTED";
    cin >> n >> m;
    for (unsigned i = 0; i < m; i++)  {
        cin >> t;
        if (t == "LAND")
            c++;
        else if (t == "LEAVE")  {
            if (c > 0)  {
                c--;
            }
        }
        else  {
            c = 0;
        }
        if (c > n)  {
            result = "PLAN REJECTED";
            break;
        }
    }
    cout << result << endl;
    return 0;
}
