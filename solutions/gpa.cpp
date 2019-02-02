#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if (n >= 80)
    {
        cout << "4.0" << endl;
    }
    else if (n > 69)
    {
        cout << "3.6" << endl;
    }
    else if (n > 64)
    {
        cout << "3.2" << endl;
    }
    else if (n > 59)
    {
        cout << "2.8" << endl;
    }
    else if (n > 54)
    {
        cout << "2.4" << endl;
    }
    else if (n > 49)
    {
        cout << "2.0" << endl;
    }
    else if (n > 44)
    {
        cout << "1.6" << endl;
    }
    else if (n > 39)
    {
        cout << "1.2" << endl;
    }
    else
    {
        cout << "0.8" << endl;
    }
    
    return 0;
}
