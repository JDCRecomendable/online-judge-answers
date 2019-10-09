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
    short temp;
    int result = 0;
    while (true)  {
        cin >> temp;
        if (temp == -1)  {
            break;
        }
        result += temp;
    }
    cout << result << endl;
    return 0;
}
