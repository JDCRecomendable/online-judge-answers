/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>
#include <string>

using namespace std;

int main()  {
    short n, temp1, temp2;
    int e;
    cin >> n >> e;
    string lol [n];
    string temp;
    for (short i = 0; i < n; i++)  {
        for (short j = 0; j < n; j++)  {
            lol[i].push_back('0');
        }
    }
    for (int i = 0; i < e; i++)  {
        cin >> temp1 >> temp2;
        temp = lol[temp1 - 1];
        if (temp[temp2 - 1] == '1')  {
            continue;
        }
        temp[temp2 - 1] = '1';
        lol[temp1 - 1] = temp;
        
        temp = lol[temp2 - 1];
        temp[temp1 - 1] = '1';
        lol[temp2 - 1] = temp;
    }
    for (short i = 0; i < n; i++)  {
        cout << lol[i] << endl;
    }
    return 0;
}
