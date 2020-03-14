#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[31];

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, maxx=0, ans=0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++) {
		if (arr[i] > maxx) {
			maxx = arr[i];
			ans++;
		}
	}

	cout << ans << ' ';
	ans = 0; maxx = 0;

	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] > maxx) {
			maxx = arr[i];
			ans++;
		}
	}
	cout << ans << '\n';
	ans = 0; maxx = 0;
	return 0;
}