#include <bits/stdc++.h>

using namespace std;

int main()  {
    int n, e, a, b, c, d;
    map<int, int> chairs;
    cin >> n >> e;
    for (int i = 0; i < n; i++)  {
	chairs[i] = i;
    }
    for (int i = 0; i < e; i++)  {
	cin >> a >> b;
	c = chairs[a];
	d = chairs[b];
	chairs[a] = d;
	chairs[b] = c;
    }
    for (int i = 0; i < n; i++)  cout << chairs[i] << endl;
    return 0;
}
