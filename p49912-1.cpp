#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[21][21];

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, val=1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[j][i] = val++;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}