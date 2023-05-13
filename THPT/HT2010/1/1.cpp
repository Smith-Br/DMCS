#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("1.inp", "r", stdin);
	freopen("1.out", "w", stdout);
	int N, M; cin >> N >> M;
	int SP[M][N], SUM[M];
	int k = 0, cs = 0;
	for (int i = 0; i < M; i++) SUM[i] = 0;
	for (int i = 0; i < N; i++) for (int j = 0; j < M; j++) cin >> SP[j][i];
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) SUM[i]+=SP[i][j];
		cout<<"Muc chat luong "<<i+1<<" co "<<SUM[i]<<" san pham"<<endl;
		if (SUM[i] > k) {
			k = SUM[i];
			cs = i+1;
		}
	} cout << cs << " " << k;
	return 0;
}