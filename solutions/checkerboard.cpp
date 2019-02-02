#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s;
    
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            s = 'o';
        }
        else
        {
            s = 'x';
        }
        
        for (int j = 0; j < n; j++)
        {
            cout << s;
            if (s == 'x')
            {
                s = 'o';
            }
            else
            {
                s = 'x';
            }
        }
        
        cout << endl;
    }
    
    return 0;
}
