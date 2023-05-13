#include <bits/stdc++.h>
using namespace std;

int kobitdattenj(string n) {
	int sum = 0;
	for (int i = 0; i < n.size(); i++) sum = sum + n[i] - 48;
	return sum;
}

int main() {
	freopen("25.inp", "r", stdin);
	freopen("25.out", "w", stdout);
	string N; cin >> N;
	if (N.size() == 1 && N[0] == '9') cout << 1;
	else if (kobitdattenj(N) == 9) cout << 1;
	else cout << 0;
	return 0;
}