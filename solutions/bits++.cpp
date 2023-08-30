#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int n, r = 0;
	string p;
	cin >> n;
	while (n > 0) {
		n--;
		cin >> p;
		if (p.find("++") != string::npos)
			r++;
		else
			r--;
	}
	cout << r << endl;
	return 0;
}
