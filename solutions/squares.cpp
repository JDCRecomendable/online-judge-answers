#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            cout << i * i << endl;
        }
        else
        {
            cout << i * i << ' ';
        }
    }
    
    return 0;
}
