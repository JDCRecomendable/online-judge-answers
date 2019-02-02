/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable. All rights reserved.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>

using namespace std;

int main()  {
    int n, temp;
    long long result = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++)  {
        cin >> temp;
        if (temp < 0)  temp *= -1;
        result += temp;
    }
    
    cout << result << endl;
    
    return 0;
}
