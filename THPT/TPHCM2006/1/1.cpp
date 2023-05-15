#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("1.inp", "r", stdin);
	freopen("1.out", "w", stdout);
	int N, sum, val[N], Arr[N], T[N]; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> val[i];
		Arr[i] = val[i];
		T[i] = 1;
	}

	for (int i = 0; i < N-1; i++) {
		sum = Arr[i];
		for (int j = i+1; j < N; j++) {
			sum += Arr[j];
			if (abs(sum) < abs(Arr[i])) T[i] = j + 1;
			Arr[i] = min(abs(Arr[i]), abs(sum));
		}
	}

	int mn = Arr[0];

	for (int i = 1; i < N; i++) mn = min(mn, Arr[i]);
	for (int i = 1; i < N; i++) if (Arr[i] == mn) {
		cout << i+1 << " " << T[i] << " " << Arr[i] << endl;
		break;
	}

	return 0;
}