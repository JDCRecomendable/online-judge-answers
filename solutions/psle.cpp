#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin >> s;
    
    if (s > 90)
    {
        cout << "A*" << endl;
    }
    else if (s >= 75)
    {
        cout << 'A' << endl;
    }
    else if (s >= 60)
    {
        cout << 'B' << endl;
    }
    else if (s >= 50)
    {
        cout << 'C' << endl;
    }
    else if (s >= 35)
    {
        cout << 'D' << endl;
    }
    else if (s >= 20)
    {
        cout << 'E' << endl;
    }
    else
    {
        cout << 'U' << endl;
    }
    
    return 0;
}
