#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int h, w, result = 0;
    string temp;
    
    cin >> h;
    cin >> w;
    
    for (int i = 0; i < h; i++)
    {
        cin >> temp;
        
        for (int j = 0; j < w; j++)
        {
            if (temp[j] == '*')
            {
                result++;
            }
        }
    }
    
    cout << result << endl;
    
    return 0;
}
