#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    cin >> x;
    int list_of_numbers [n];
    for (int i = 0; i < n; i++)
    {
        cin >> list_of_numbers[i];
    }

    cout << list_of_numbers[x - 1] << endl;

    return 0;
}
