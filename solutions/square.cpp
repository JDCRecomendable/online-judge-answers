#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int side;
    cin >> side;

    string result_line;

    for (int i = 0; i < side; i++)
    {
	result_line.append("*");
    }

    for (int i = 0; i < side; i++)
    {
	cout << result_line << endl;
    }

    return 0;
}
