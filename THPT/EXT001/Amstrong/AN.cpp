#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	freopen("AN.inp", "r", stdin);
	freopen("AN.out", "w", stdout);
	boost;
	int n; cin >> n;
	for (int i = 2; 3*i < n; i++) for (int j = 1; i*(1+2*j) <= n; j++) if (i*(1+2*j) == n) cout << i;
	return 0;
}