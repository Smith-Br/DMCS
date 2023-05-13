#include <bits/stdc++.h>
using namespace std;

int where(string s) {
	int stack = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') stack++;
		else {
			if (stack > 0) stack--;
			else return i+1;
		}
	}
	if (stack > 0) return s.size()+1;
	else if (stack = 0) return -1;
}

int main() {
	freopen("2.inp", "r", stdin);
	freopen("2.out", "w", stdout);
	string s; cin >> s;
	if (where(s) == -1) cout << "DUNG";
	else cout << "SAI" << endl << where(s);
	return 0;
}