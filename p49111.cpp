#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

long long int n, m, arr[200001], s, e, sum[200001];


int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	
	cin>> n >> m;
	for (int i = 1; i <= n; i++){
		cin >> arr[i];
		sum[i] += sum[i - 1] + arr[i];
	}

	for (int i = 1; i <= m; i++) {
		cin >> s >> e;
		if (sum[e] - sum[s - 1] > 0)
			cout << '+';
		cout << sum[e] - sum[s - 1]<<'\n';
	}

	return 0;
}