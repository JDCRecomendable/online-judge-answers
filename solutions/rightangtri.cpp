#include <bits/stdc++.h>
using namespace std;

int main()
{
    int side;
    cin >> side;
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
