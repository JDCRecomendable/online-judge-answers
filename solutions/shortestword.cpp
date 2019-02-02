/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable. All rights reserved.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <bits/stdc++.h>

using namespace std;

int main()  {
    unsigned short n;
    long long len, lentemp;
    string temp, shortest;
    cin >> n;
    if (n > 0)  {
        cin >> shortest;
        len = shortest.size();
        n--;
    }
    while (n)  {
        cin >> temp;
        lentemp = temp.size();
        if (lentemp < len)  {
            len = lentemp;
            shortest = temp;
        }
        n--;
    }
    cout << shortest << endl;
    return 0;
}
