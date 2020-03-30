#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= (int)sqrt(n); i++) {
		if (n % i == 0) {
			cout << "False\n";
			return 0;
		}
	}
	cout << "True\n";

	return 0;
}