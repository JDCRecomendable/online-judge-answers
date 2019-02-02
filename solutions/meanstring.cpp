#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l;
    int ans = 0;
    int temp;
    
    cin >> l;
    
    for (int i = 1; i <= l; i++)
    {
        cin >> temp;
        ans += temp;
    }
    
    cout << ans / l << endl;
    
    return 0;
}
