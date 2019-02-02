#include <bits/stdc++.h>

using namespace std;

int main()  {
    unsigned n;
    int t, ans = 0;
    priority_queue<int> ls;
    cin >> n;
    for (unsigned i = 0; i < n; i++)  {
        cin >> t;
        ls.push(t);
    }
    for (unsigned i = 1; i <= n; i++)  {
        if (i % 4 == 0)  {
            ls.pop();
        }
        else  {
            ans += ls.top();
            ls.pop();
        }
    }
    cout << ans << endl;
    return 0;
}
