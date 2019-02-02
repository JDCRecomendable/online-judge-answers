/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable. All rights reserved.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//~ int main()  {
    //~ short n, record = 0, max = 0;
    //~ int x = -1, t, r;
    //~ vector<int> ls;
    //~ cin >> n;
    //~ for (short i = 0; i < n; i++)  {
        //~ cin >> t;
        //~ ls.push_back(t);
    //~ }
    //~ sort(ls.begin(), ls.end());
    //~ for (short i = 0; i < n; i++)  {
        //~ t = ls[i];
        //~ if (t == x)  {
            //~ record++;
            //~ if (i == (n - 1))  {
                //~ if (record > max)  {
                    //~ max = record;
                    //~ r = x;
                //~ }
            //~ }
        //~ }  else  {
            //~ if (record > max)  {
                //~ max = record;
                //~ r = x;
            //~ }
            //~ x = t;
            //~ record = 1;
        //~ }
        //~ cout << ls[i] << ' ' << record << endl;
    //~ }
    //~ cout << r << endl;
    //~ return 0;
//~ }

int main()  {
    short n;
    cin >> n;
    int x [n];
    int p [n];
    int m [n + 1];
    int l = 0;
    for (int i = 0; i < n; i++)  cin >> x[i];
    int lower, upper;
    for (int i = 0; i < n; i++)  {
        lower = 1;
        upper = l;
        while (lower <= upper)  {
            int mid = (lower + upper) / 2;
            mid = (lower + upper) - mid;
            if (x[m[mid]] < x[i])
                lower = mid + 1;
            else
                upper = mid - 1;
        }
    }
    int newL = lower;
    return 0;
}
