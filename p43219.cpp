#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	string a;
	cin >> a;
	reverse(a.begin(), a.end());
	cout << a << '\n';

	return 0;
}