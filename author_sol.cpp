#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// view the image in this repository for the derivation of formula
		int y = n % 2020;
		int x = ((n - y) / 2020) - y;
		cout << (x >= 0 && 2020 * x + 2021 * y == n ? "YES" : "NO") << '\n';
	}
	return 0;
}
