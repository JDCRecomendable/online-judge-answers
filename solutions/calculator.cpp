#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char sign;
    cin >> a;
    cin >> sign;
    cin >> b;

    if (sign == '+')
    {
	cout << a + b << endl;
    }
    else if (sign == '-')
    {
	cout << a - b << endl;
    }
    else if (sign == '*')
    {
	cout << a * b << endl;
    }
    else if (sign == '/')
    {
	cout << a / b << endl;
    }
    return 0;
}
