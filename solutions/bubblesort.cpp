#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{
    int n, d;
    cin >> n;
    vector<int> bubbles;
    bool flag = true;
    int temp;
    
    for (int i = 0; i < n; i++)
    {
        cin >> d;
        bubbles.push_back(d);
    }
    
    while (flag)
    {
        flag = false;
        for (unsigned int i = 0; i < bubbles.size() - 1; i++)
        {
            if (bubbles[i] > bubbles[i + 1])
            {
                flag = true;
                temp = bubbles[i];
                bubbles[i] = bubbles[i + 1];
                bubbles[i + 1] = temp;
            }
        }
    }
    
    for (unsigned int i = 0; i < bubbles.size(); i++)
    {
        if (i != bubbles.size())
        {
            cout << bubbles[i] << ' ';
        }
        else
        {
            cout << bubbles[i] << endl;
        }
    }
    
    return 0;
}
