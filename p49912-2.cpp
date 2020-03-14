#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, num, sum=0;
	cin >> n;

	for (int i = 0; i < n-1; i++) {
		cin >> num;
		sum += num-1;
	}
	cin >> num;
	sum += num;
	cout << sum << '\n';

	return 0;
}