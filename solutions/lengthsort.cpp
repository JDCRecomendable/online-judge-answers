/**
 * Copyright (c) 2018 Jared Daniel Carbonell Recomendable.
 */

// #include <bits/stdc++.h> // non-standard, use only when compiling with G++
// <bits/stdc++.h> includes most header files from the C++ standard libraries,
// making it suitable for programming contests where speed determines rank, but
// not for tasks where space and compile time are concerned.
#include <bits/stdc++.h>

using namespace std;

struct Word  {
    unsigned size;
    string str;
};

bool operator<(const Word & lhs, const Word & rhs)  {
    return lhs.size > rhs.size;
}

int main()  {
    unsigned n, s;
    string t;
    deque<Word> ls;
    cin >> n;
    for (unsigned i = 0; i < n; i++)  {
        cin >> t;
        s = t.size();
        Word temp = {s, t};
        ls.push_back(temp);
    }
    stable_sort(ls.begin(), ls.end());
    while (ls.size())  {
        cout << ls.front().str << endl;
        ls.pop_front();
    }
    return 0;
}
