#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin >> s;
    
    if (s < 3)
    {
        cout << "That's a terrible potato!" << endl;
    }
    else if (s < 6)
    {
        cout << "That's a normal potato!" << endl;
    }
    else if (s < 9)
    {
        cout << "That's a good potato!" << endl;
    }
    else
    {
        cout << "OMG POTATOES!!!" << endl;
    }
    
    return 0;
}
