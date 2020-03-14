#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, m, temp, ans=1;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> temp;

	temp = m;
	while (temp < n) {
		temp += m - 1;
		ans++;
	}

	cout << ans << '\n';

	return 0;
}