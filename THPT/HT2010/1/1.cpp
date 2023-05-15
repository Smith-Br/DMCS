#include <bits/stdc++.h>
using namespace std;

#define ii int
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	freopen("1.inp", "r", stdin);
	freopen("1.out", "w", stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ii N, M; cin >> N >> M;
	ii SP[M][N], SUM[M];
	ii k = 0, cs = 0;
	for (ii i = 0; i < M; i++) SUM[i] = 0;
	for (ii i = 0; i < N; i++) for (ii j = 0; j < M; j++) cin >> SP[j][i];
	for (ii i = 0; i < M; i++) {
		for (ii j = 0; j < N; j++) SUM[i]+=SP[i][j];
		cout<<"Muc chat luong "<<i+1<<" co "<<SUM[i]<<" san pham"<<endl;
		if (SUM[i] > k) {
			k = SUM[i];
			cs = i+1;
		}
	} cout << cs << " " << k;
	return 0;
}