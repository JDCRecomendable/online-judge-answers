#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    int temp;
    int ans = 0;
    
    cin >> d;
    
    while (d)
    {
        cin >> temp;
        ans += temp;
        d--;
    }
    
    cout << ans << endl;
    return 0;
}
