#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while (n >= 1)
    {
        if (n == 1)
        {
            cout << 1 << endl;
            break;
        }
        cout << n << ' ';
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = 3 * n + 1;
        }
    }
    
    return 0;
}
